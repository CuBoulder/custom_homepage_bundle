(function ($) {
  if (window.top !== window.self) {
    document.write = '';
    //window.top.location = window.self.location;
    setTimeout(function() {
      document.body.innerHTML = '';
      document.head.innerHTML = '';
    }, 0);
    window.self.onload = function() {
      document.body.innerHTML = '';
      document.head.innerHTML = '';
    };
  }
})(jQuery);
