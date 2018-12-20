<?php

/* index.twig.html */
class __TwigTemplate_83019dd8df2591b78ad149233ca0a190ef3f62d067d906bd56c9af9f58cec8f6 extends Twig_Template
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
        echo "The orgs:

<ul>
  ";
        // line 4
        $context['_parent'] = $context;
        $context['_seq'] = twig_ensure_traversable(($context["organizations"] ?? null));
        foreach ($context['_seq'] as $context["_key"] => $context["org"]) {
            // line 5
            echo "  <li>";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["org"], "orgNames", array()), "html", null, true);
            echo "</li>
  ";
        }
        $_parent = $context['_parent'];
        unset($context['_seq'], $context['_iterated'], $context['_key'], $context['org'], $context['_parent'], $context['loop']);
        $context = array_intersect_key($context, $_parent) + $_parent;
        // line 7
        echo "</ul>

";
    }

    public function getTemplateName()
    {
        return "index.twig.html";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  41 => 7,  32 => 5,  28 => 4,  23 => 1,);
    }

    public function getSourceContext()
    {
        return new Twig_Source("", "index.twig.html", "/var/www/html/sites/all/modules/custom_homepage_bundle/modules/custom/cu_atoz/twig_templates/index.twig.html");
    }
}
