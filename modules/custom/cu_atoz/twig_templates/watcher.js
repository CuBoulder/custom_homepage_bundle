const fs = require('fs');
const path = require('path');
const chokidar = require('../node_modules/chokidar');

const cachePath = '../twig_cache';

// One-liner for current directory, ignores .dotfiles
chokidar.watch('.', {ignored: /(^|[\/\\])\../}).on('change', (filename) => {
  try {
    var deleteFolderRecursive = function(path) {
      if( fs.existsSync(path) ) {
        fs.readdirSync(path).forEach(function(file,index){
          var curPath = path + "/" + file;
          if(fs.lstatSync(curPath).isDirectory()) { // recurse
            deleteFolderRecursive(curPath);
          } else { // delete file
            fs.unlinkSync(curPath);
          }
        });
        fs.rmdirSync(path);
      }
    };

    deleteFolderRecursive(cachePath);

    if (!fs.existsSync(cachePath)){
      fs.mkdirSync(cachePath);
    }
  } catch(err) {
    console.error(err)
  }
});


