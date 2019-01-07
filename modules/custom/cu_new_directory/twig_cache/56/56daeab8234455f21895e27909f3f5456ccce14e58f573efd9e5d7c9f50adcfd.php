<?php

/* show.twig */
class __TwigTemplate_832f08c332c749478358994d0ff0f0d47fff1babe13593da62814c1307e5126a extends Twig_Template
{
    private $source;

    public function __construct(Twig_Environment $env)
    {
        parent::__construct($env);

        $this->source = $this->getSourceContext();

        $this->parent = false;

        $this->blocks = array(
        );
    }

    protected function doDisplay(array $context, array $blocks = array())
    {
        // line 1
        echo "<style>
    #ds-show li {
        list-style: armenian;
    }
</style>
<div id=\"ds-show\">
    ";
        // line 7
        if (($context["org"] ?? null)) {
            // line 8
            echo "        <div class=\"col-md-12\">
            <p><a href=\"";
            // line 9
            echo twig_escape_filter($this->env, ($context["baseURL"] ?? null), "html", null, true);
            echo "\">Home</a> > <a href=\"";
            echo twig_escape_filter($this->env, ($context["baseURL"] ?? null), "html", null, true);
            echo "/directory\">Directory</a> > ";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, ($context["org"] ?? null), "Name", array()), "html", null, true);
            echo "</p>
            <h3>";
            // line 10
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, ($context["org"] ?? null), "Name", array()), "html", null, true);
            echo "</h3>
            ";
            // line 12
            echo "        </div>
        <div class=\"col-md-8\">
            <h4>What We Do</h4>
            <p>";
            // line 15
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, ($context["org"] ?? null), "Summary", array()), "html", null, true);
            echo "</p>
            <div class=\"col-md-3\">Main Phone - ";
            // line 16
            echo twig_escape_filter($this->env, (($__internal_7cd7461123377b8c9c1b6a01f46c7bbd94bd12e59266005df5e93029ddbc0ec5 = ($context["org"] ?? null)) && is_array($__internal_7cd7461123377b8c9c1b6a01f46c7bbd94bd12e59266005df5e93029ddbc0ec5) || $__internal_7cd7461123377b8c9c1b6a01f46c7bbd94bd12e59266005df5e93029ddbc0ec5 instanceof ArrayAccess ? ($__internal_7cd7461123377b8c9c1b6a01f46c7bbd94bd12e59266005df5e93029ddbc0ec5["Phone"] ?? null) : null), "html", null, true);
            echo "</div>
            <div class=\"col-md-3\"><a href=\"mailto:";
            // line 17
            echo twig_escape_filter($this->env, (($__internal_3e28b7f596c58d7729642bcf2acc6efc894803703bf5fa7e74cd8d2aa1f8c68a = ($context["org"] ?? null)) && is_array($__internal_3e28b7f596c58d7729642bcf2acc6efc894803703bf5fa7e74cd8d2aa1f8c68a) || $__internal_3e28b7f596c58d7729642bcf2acc6efc894803703bf5fa7e74cd8d2aa1f8c68a instanceof ArrayAccess ? ($__internal_3e28b7f596c58d7729642bcf2acc6efc894803703bf5fa7e74cd8d2aa1f8c68a["Primary Email"] ?? null) : null), "html", null, true);
            echo "\">Email</a></div>
            <div class=\"col-md-3\"><a href=\"";
            // line 18
            echo twig_escape_filter($this->env, (($__internal_b0b3d6199cdf4d15a08b3fb98fe017ecb01164300193d18d78027218d843fc57 = ($context["org"] ?? null)) && is_array($__internal_b0b3d6199cdf4d15a08b3fb98fe017ecb01164300193d18d78027218d843fc57) || $__internal_b0b3d6199cdf4d15a08b3fb98fe017ecb01164300193d18d78027218d843fc57 instanceof ArrayAccess ? ($__internal_b0b3d6199cdf4d15a08b3fb98fe017ecb01164300193d18d78027218d843fc57["Primary Website"] ?? null) : null), "html", null, true);
            echo "\">Website</a></div>
            <div class=\"col-md-3\"><a href=\"";
            // line 19
            echo twig_escape_filter($this->env, (($__internal_81ccf322d0988ca0aa9ae9943d772c435c5ff01fb50b956278e245e40ae66ab9 = ($context["org"] ?? null)) && is_array($__internal_81ccf322d0988ca0aa9ae9943d772c435c5ff01fb50b956278e245e40ae66ab9) || $__internal_81ccf322d0988ca0aa9ae9943d772c435c5ff01fb50b956278e245e40ae66ab9 instanceof ArrayAccess ? ($__internal_81ccf322d0988ca0aa9ae9943d772c435c5ff01fb50b956278e245e40ae66ab9["Staff Listing (URL)"] ?? null) : null), "html", null, true);
            echo "\">Staff Listing URL</a></div>
            <p>Social Links: ----</p>
            <p>
                <span>Label ";
            // line 22
            echo twig_escape_filter($this->env, (($__internal_add9db1f328aaed12ef1a33890510da978cc9cf3e50f6769d368473a9c90c217 = ($context["org"] ?? null)) && is_array($__internal_add9db1f328aaed12ef1a33890510da978cc9cf3e50f6769d368473a9c90c217) || $__internal_add9db1f328aaed12ef1a33890510da978cc9cf3e50f6769d368473a9c90c217 instanceof ArrayAccess ? ($__internal_add9db1f328aaed12ef1a33890510da978cc9cf3e50f6769d368473a9c90c217["Contact 1 Label"] ?? null) : null), "html", null, true);
            echo ": Field ";
            echo twig_escape_filter($this->env, (($__internal_128c19eb75d89ae9acc1294da2e091b433005202cb9b9351ea0c5dd5f69ee105 = ($context["org"] ?? null)) && is_array($__internal_128c19eb75d89ae9acc1294da2e091b433005202cb9b9351ea0c5dd5f69ee105) || $__internal_128c19eb75d89ae9acc1294da2e091b433005202cb9b9351ea0c5dd5f69ee105 instanceof ArrayAccess ? ($__internal_128c19eb75d89ae9acc1294da2e091b433005202cb9b9351ea0c5dd5f69ee105["Contact 1 field"] ?? null) : null), "html", null, true);
            echo "</span><br>
                <span>Label ";
            // line 23
            echo twig_escape_filter($this->env, (($__internal_921de08f973aabd87ecb31654784e2efda7404f12bd27e8e56991608c76e7779 = ($context["org"] ?? null)) && is_array($__internal_921de08f973aabd87ecb31654784e2efda7404f12bd27e8e56991608c76e7779) || $__internal_921de08f973aabd87ecb31654784e2efda7404f12bd27e8e56991608c76e7779 instanceof ArrayAccess ? ($__internal_921de08f973aabd87ecb31654784e2efda7404f12bd27e8e56991608c76e7779["Contact 2 Label"] ?? null) : null), "html", null, true);
            echo ": Field ";
            echo twig_escape_filter($this->env, (($__internal_3e040fa9f9bcf48a8b054d0953f4fffdaf331dc44bc1d96f1bb45abb085e61d1 = ($context["org"] ?? null)) && is_array($__internal_3e040fa9f9bcf48a8b054d0953f4fffdaf331dc44bc1d96f1bb45abb085e61d1) || $__internal_3e040fa9f9bcf48a8b054d0953f4fffdaf331dc44bc1d96f1bb45abb085e61d1 instanceof ArrayAccess ? ($__internal_3e040fa9f9bcf48a8b054d0953f4fffdaf331dc44bc1d96f1bb45abb085e61d1["Contact 2 field"] ?? null) : null), "html", null, true);
            echo "</span><br>
            </p>
        </div>
        <div class=\"col-md-4\">
            <img src=\"https://via.placeholder.com/375\" alt=\"Placeholder Image\"><br>
            Campus Bird ID: ";
            // line 28
            echo twig_escape_filter($this->env, (($__internal_bd1cf16c37e30917ff4f54b7320429bcc2bb63615cd8a735bfe06a3f1b5c82a0 = ($context["org"] ?? null)) && is_array($__internal_bd1cf16c37e30917ff4f54b7320429bcc2bb63615cd8a735bfe06a3f1b5c82a0) || $__internal_bd1cf16c37e30917ff4f54b7320429bcc2bb63615cd8a735bfe06a3f1b5c82a0 instanceof ArrayAccess ? ($__internal_bd1cf16c37e30917ff4f54b7320429bcc2bb63615cd8a735bfe06a3f1b5c82a0["Campus Bird ID"] ?? null) : null), "html", null, true);
            echo "
            ";
            // line 29
            echo twig_escape_filter($this->env, (($__internal_602f93ae9072ac758dc9cd47ca50516bbc1210f73d2a40b01287f102c3c40866 = ($context["org"] ?? null)) && is_array($__internal_602f93ae9072ac758dc9cd47ca50516bbc1210f73d2a40b01287f102c3c40866) || $__internal_602f93ae9072ac758dc9cd47ca50516bbc1210f73d2a40b01287f102c3c40866 instanceof ArrayAccess ? ($__internal_602f93ae9072ac758dc9cd47ca50516bbc1210f73d2a40b01287f102c3c40866["Campus Box"] ?? null) : null), "html", null, true);
            echo "<br>
            ";
            // line 30
            echo twig_escape_filter($this->env, (($__internal_de222b1ef20cf829a938a4545cbb79f4996337944397dd43b1919bce7726ae2f = ($context["org"] ?? null)) && is_array($__internal_de222b1ef20cf829a938a4545cbb79f4996337944397dd43b1919bce7726ae2f) || $__internal_de222b1ef20cf829a938a4545cbb79f4996337944397dd43b1919bce7726ae2f instanceof ArrayAccess ? ($__internal_de222b1ef20cf829a938a4545cbb79f4996337944397dd43b1919bce7726ae2f["Room"] ?? null) : null), "html", null, true);
            echo "
        </div>
    ";
        } else {
            // line 33
            echo "        ";
            echo twig_escape_filter($this->env, ($context["message"] ?? null), "html", null, true);
            echo "
    ";
        }
        // line 35
        echo "</div>
";
    }

    public function getTemplateName()
    {
        return "show.twig";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  111 => 35,  105 => 33,  99 => 30,  95 => 29,  91 => 28,  81 => 23,  75 => 22,  69 => 19,  65 => 18,  61 => 17,  57 => 16,  53 => 15,  48 => 12,  44 => 10,  36 => 9,  33 => 8,  31 => 7,  23 => 1,);
    }

    public function getSourceContext()
    {
        return new Twig_Source("", "show.twig", "/var/www/html/sites/all/modules/custom_homepage_bundle/modules/custom/cu_new_directory/twig_templates/show.twig");
    }
}
