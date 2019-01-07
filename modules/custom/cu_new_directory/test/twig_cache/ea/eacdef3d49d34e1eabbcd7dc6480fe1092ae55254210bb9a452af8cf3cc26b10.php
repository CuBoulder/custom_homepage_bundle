<?php

/* index.twig */
class __TwigTemplate_791f52c4a63de2b219834c127d7ed0e06fff682afc07d8d1c8134b2b2f6ede7a extends Twig_Template
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
        echo "<h1>A Template</h1>
<p>Message: ";
        // line 2
        echo twig_escape_filter($this->env, ($context["message"] ?? null), "html", null, true);
        echo "</p>
<p>Slug: ";
        // line 3
        echo twig_escape_filter($this->env, call_user_func_array($this->env->getFilter('slugify')->getCallable(), array(($context["path"] ?? null))), "html", null, true);
        echo "</p>
";
    }

    public function getTemplateName()
    {
        return "index.twig";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  30 => 3,  26 => 2,  23 => 1,);
    }

    public function getSourceContext()
    {
        return new Twig_Source("", "index.twig", "/var/www/html/sites/all/modules/custom_homepage_bundle/modules/custom/cu_atoz/test/twig_templates/index.twig");
    }
}
