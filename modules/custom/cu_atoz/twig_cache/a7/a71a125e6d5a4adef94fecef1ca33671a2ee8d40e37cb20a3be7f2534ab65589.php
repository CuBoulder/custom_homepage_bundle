<?php

/* show.twig */
class __TwigTemplate_9f48e8cf93d537c325db924c2ebe92313553d1c941576d6a7e28944546af342e extends Twig_Template
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
            echo "        ";
            echo twig_escape_filter($this->env, ($context["org"] ?? null), "html", null, true);
            echo "
        <div class=\"col-md-12\">
            <p><a href=\"";
            // line 10
            echo twig_escape_filter($this->env, ($context["baseURL"] ?? null), "html", null, true);
            echo "\">Home</a> > <a href=\"";
            echo twig_escape_filter($this->env, ($context["baseURL"] ?? null), "html", null, true);
            echo "/directory\">Directory</a> > ";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, ($context["org"] ?? null), "Name", array()), "html", null, true);
            echo "</p>
           <h3>";
            // line 11
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, ($context["org"] ?? null), "Name", array()), "html", null, true);
            echo "</h3>
            ";
            // line 13
            echo "        </div>
        <div class=\"col-md-8\">
            <h4>What We Do</h4>
            <p>";
            // line 16
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, ($context["org"] ?? null), "Summary", array()), "html", null, true);
            echo "</p>
            <div class=\"col-md-3\">Main Phone - ";
            // line 17
            echo twig_escape_filter($this->env, (($__internal_7cd7461123377b8c9c1b6a01f46c7bbd94bd12e59266005df5e93029ddbc0ec5 = ($context["org"] ?? null)) && is_array($__internal_7cd7461123377b8c9c1b6a01f46c7bbd94bd12e59266005df5e93029ddbc0ec5) || $__internal_7cd7461123377b8c9c1b6a01f46c7bbd94bd12e59266005df5e93029ddbc0ec5 instanceof ArrayAccess ? ($__internal_7cd7461123377b8c9c1b6a01f46c7bbd94bd12e59266005df5e93029ddbc0ec5["Phone"] ?? null) : null), "html", null, true);
            echo "</div>
            <div class=\"col-md-3\"><a href=\"mailto:";
            // line 18
            echo twig_escape_filter($this->env, (($__internal_3e28b7f596c58d7729642bcf2acc6efc894803703bf5fa7e74cd8d2aa1f8c68a = ($context["org"] ?? null)) && is_array($__internal_3e28b7f596c58d7729642bcf2acc6efc894803703bf5fa7e74cd8d2aa1f8c68a) || $__internal_3e28b7f596c58d7729642bcf2acc6efc894803703bf5fa7e74cd8d2aa1f8c68a instanceof ArrayAccess ? ($__internal_3e28b7f596c58d7729642bcf2acc6efc894803703bf5fa7e74cd8d2aa1f8c68a["Primary Email"] ?? null) : null), "html", null, true);
            echo "\">Email</a></div>
            <div class=\"col-md-3\"><a href=\"";
            // line 19
            echo twig_escape_filter($this->env, (($__internal_b0b3d6199cdf4d15a08b3fb98fe017ecb01164300193d18d78027218d843fc57 = ($context["org"] ?? null)) && is_array($__internal_b0b3d6199cdf4d15a08b3fb98fe017ecb01164300193d18d78027218d843fc57) || $__internal_b0b3d6199cdf4d15a08b3fb98fe017ecb01164300193d18d78027218d843fc57 instanceof ArrayAccess ? ($__internal_b0b3d6199cdf4d15a08b3fb98fe017ecb01164300193d18d78027218d843fc57["Primary Website"] ?? null) : null), "html", null, true);
            echo "\">Website</a></div>
            <div class=\"col-md-3\"><a href=\"";
            // line 20
            echo twig_escape_filter($this->env, (($__internal_81ccf322d0988ca0aa9ae9943d772c435c5ff01fb50b956278e245e40ae66ab9 = ($context["org"] ?? null)) && is_array($__internal_81ccf322d0988ca0aa9ae9943d772c435c5ff01fb50b956278e245e40ae66ab9) || $__internal_81ccf322d0988ca0aa9ae9943d772c435c5ff01fb50b956278e245e40ae66ab9 instanceof ArrayAccess ? ($__internal_81ccf322d0988ca0aa9ae9943d772c435c5ff01fb50b956278e245e40ae66ab9["Staff Listing (URL)"] ?? null) : null), "html", null, true);
            echo "\">Staff Listing URL</a></div>
        </div>
        <div class=\"col-md-4\">
            <img src=\"https://via.placeholder.com/375\" alt=\"Placeholder Image\">
        </div>
    ";
        } else {
            // line 26
            echo "        ";
            echo twig_escape_filter($this->env, ($context["message"] ?? null), "html", null, true);
            echo "
    ";
        }
        // line 28
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
        return array (  87 => 28,  81 => 26,  72 => 20,  68 => 19,  64 => 18,  60 => 17,  56 => 16,  51 => 13,  47 => 11,  39 => 10,  33 => 8,  31 => 7,  23 => 1,);
    }

    public function getSourceContext()
    {
        return new Twig_Source("", "show.twig", "/var/www/html/sites/all/modules/custom_homepage_bundle/modules/custom/cu_atoz/twig_templates/show.twig");
    }
}
