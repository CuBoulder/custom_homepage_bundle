<?php

/* index.twig */
class __TwigTemplate_cee594d9c765151921732723c5f13a35096bc6db01c9a2476b5822714fc01914 extends Twig_Template
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
    #ds label {
        display: inline-block;
    }

    #ds li {
        list-style: none;
        padding: 7px;
    }

    #ds ul {
        margin-top: 20px;
    }
</style>

<div id=\"ds\">
    <h3>Find A Department:</h3>
    <hr>
    <form id='directory-search-form'
          action='";
        // line 20
        echo twig_escape_filter($this->env, ($context["baseURL"] ?? null), "html", null, true);
        echo "/directory'
          method='post'
          encType=\"multipart/form-data\">
        <label for=\"directory-search-form\">Query</label>
        <input type=\"text\" name=\"directory-search-box\" value=\"";
        // line 24
        echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, ($context["params"] ?? null), "query", array()), "html", null, true);
        echo "\"/>
        <label for=\"d-type-select\">Type</label>
        <select name=\"d-type-select\" id=\"d-type-select\">
            ";
        // line 27
        $context['_parent'] = $context;
        $context['_seq'] = twig_ensure_traversable(($context["types"] ?? null));
        foreach ($context['_seq'] as $context["_key"] => $context["type"]) {
            // line 28
            echo "                <option value=\"";
            echo twig_escape_filter($this->env, $context["type"], "html", null, true);
            echo "\"
                        ";
            // line 29
            if (($context["type"] == twig_get_attribute($this->env, $this->source, ($context["params"] ?? null), "type", array()))) {
                echo " selected ";
            }
            echo ">
                    ";
            // line 30
            echo twig_escape_filter($this->env, $context["type"], "html", null, true);
            echo "
                </option>
            ";
        }
        $_parent = $context['_parent'];
        unset($context['_seq'], $context['_iterated'], $context['_key'], $context['type'], $context['_parent'], $context['loop']);
        $context = array_intersect_key($context, $_parent) + $_parent;
        // line 33
        echo "        </select>
        <label for=\"d-task-select\">Task</label>
        <select name=\"d-task-select\" id=\"d-task-select\">
            ";
        // line 36
        $context['_parent'] = $context;
        $context['_seq'] = twig_ensure_traversable(($context["tasks"] ?? null));
        foreach ($context['_seq'] as $context["_key"] => $context["task"]) {
            // line 37
            echo "                <option value=\"";
            echo twig_escape_filter($this->env, $context["task"], "html", null, true);
            echo "\"
                        ";
            // line 38
            if (($context["task"] == twig_get_attribute($this->env, $this->source, ($context["params"] ?? null), "task", array()))) {
                echo " selected ";
            }
            echo ">
                    ";
            // line 39
            echo twig_escape_filter($this->env, $context["task"], "html", null, true);
            echo "
                </option>
            ";
        }
        $_parent = $context['_parent'];
        unset($context['_seq'], $context['_iterated'], $context['_key'], $context['task'], $context['_parent'], $context['loop']);
        $context = array_intersect_key($context, $_parent) + $_parent;
        // line 42
        echo "        </select>
        <label for=\"d-letter-select\">Letter</label>
        <select name=\"d-letter-select\" id=\"d-letter-select\">
            ";
        // line 45
        $context['_parent'] = $context;
        $context['_seq'] = twig_ensure_traversable(($context["alpha"] ?? null));
        foreach ($context['_seq'] as $context["_key"] => $context["letter"]) {
            // line 46
            echo "                <option value=\"";
            echo twig_escape_filter($this->env, $context["letter"], "html", null, true);
            echo "\"
                        ";
            // line 47
            if (($context["letter"] == twig_get_attribute($this->env, $this->source, ($context["params"] ?? null), "letter", array()))) {
                echo " selected ";
            }
            echo ">
                    ";
            // line 48
            echo twig_escape_filter($this->env, $context["letter"], "html", null, true);
            echo "
                </option>
            ";
        }
        $_parent = $context['_parent'];
        unset($context['_seq'], $context['_iterated'], $context['_key'], $context['letter'], $context['_parent'], $context['loop']);
        $context = array_intersect_key($context, $_parent) + $_parent;
        // line 51
        echo "        </select>

        <input type=\"hidden\" name=\"_csrf\" value=\"";
        // line 53
        echo twig_escape_filter($this->env, ($context["token"] ?? null), "html", null, true);
        echo "\"/>
        <input type='submit' value='Search'/>
    </form>

    ";
        // line 57
        if (($context["organizations"] ?? null)) {
            // line 58
            echo "        <ul>
            The orgs:
            ";
            // line 60
            $context['_parent'] = $context;
            $context['_seq'] = twig_ensure_traversable(($context["organizations"] ?? null));
            foreach ($context['_seq'] as $context["_key"] => $context["org"]) {
                // line 61
                echo "                <li class=\"col-md-4\">
                    <a href=\"";
                // line 62
                echo twig_escape_filter($this->env, ($context["baseURL"] ?? null), "html", null, true);
                echo "/directory/";
                echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["org"], "Slug", array()), "html", null, true);
                echo "\">";
                echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["org"], "Name", array()), "html", null, true);
                echo "</a>
                </li>
            ";
            }
            $_parent = $context['_parent'];
            unset($context['_seq'], $context['_iterated'], $context['_key'], $context['org'], $context['_parent'], $context['loop']);
            $context = array_intersect_key($context, $_parent) + $_parent;
            // line 65
            echo "        </ul>
    ";
        } else {
            // line 67
            echo "        ";
            echo twig_escape_filter($this->env, ($context["message"] ?? null), "html", null, true);
            echo "
    ";
        }
        // line 69
        echo "</div>

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
        return array (  186 => 69,  180 => 67,  176 => 65,  163 => 62,  160 => 61,  156 => 60,  152 => 58,  150 => 57,  143 => 53,  139 => 51,  130 => 48,  124 => 47,  119 => 46,  115 => 45,  110 => 42,  101 => 39,  95 => 38,  90 => 37,  86 => 36,  81 => 33,  72 => 30,  66 => 29,  61 => 28,  57 => 27,  51 => 24,  44 => 20,  23 => 1,);
    }

    public function getSourceContext()
    {
        return new Twig_Source("", "index.twig", "/var/www/html/sites/all/modules/custom_homepage_bundle/modules/custom/cu_atoz/twig_templates/index.twig");
    }
}
