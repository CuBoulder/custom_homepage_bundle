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
        if (($context["organization"] ?? null)) {
            // line 8
            echo "        <ul>
            ";
            // line 9
            $context['_parent'] = $context;
            $context['_seq'] = twig_ensure_traversable(($context["organization"] ?? null));
            foreach ($context['_seq'] as $context["_key"] => $context["field"]) {
                // line 10
                echo "                <li>
                    ";
                // line 11
                echo twig_escape_filter($this->env, $context["field"], "html", null, true);
                echo "
                </li>
            ";
            }
            $_parent = $context['_parent'];
            unset($context['_seq'], $context['_iterated'], $context['_key'], $context['field'], $context['_parent'], $context['loop']);
            $context = array_intersect_key($context, $_parent) + $_parent;
            // line 14
            echo "        </ul>
    ";
        } else {
            // line 16
            echo "        ";
            echo twig_escape_filter($this->env, ($context["message"] ?? null), "html", null, true);
            echo "
    ";
        }
        // line 18
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
        return array (  62 => 18,  56 => 16,  52 => 14,  43 => 11,  40 => 10,  36 => 9,  33 => 8,  31 => 7,  23 => 1,);
    }

    public function getSourceContext()
    {
        return new Twig_Source("", "show.twig", "/var/www/html/sites/all/modules/custom_homepage_bundle/modules/custom/cu_atoz/twig_templates/show.twig");
    }
}
