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
        margin: 7px;
        background-color: #cccccc;
    }

    #ds ul {
        margin-top: 20px;
    }

    #ds form {
        display: inline-block;
    }
</style>

<div id=\"ds\">
    <h3>Find A Department:</h3>
    <hr>
    <form id='directory-search-form'
          action='";
        // line 26
        echo twig_escape_filter($this->env, ($context["baseURL"] ?? null), "html", null, true);
        echo "/directory'
          method='post'
          encType=\"multipart/form-data\">
        <label for=\"directory-search-form\">Query</label>
        <input type=\"text\"
               size=\"50\"
               name=\"directory-search-box\"
               value=\"";
        // line 33
        echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, ($context["params"] ?? null), "query", array()), "html", null, true);
        echo "\"/>
        <label for=\"d-type-select\">Type</label>
        <select name=\"d-type-select\" id=\"d-type-select\">
            ";
        // line 36
        $context['_parent'] = $context;
        $context['_seq'] = twig_ensure_traversable(($context["types"] ?? null));
        foreach ($context['_seq'] as $context["_key"] => $context["type"]) {
            // line 37
            echo "                <option value=\"";
            echo twig_escape_filter($this->env, $context["type"], "html", null, true);
            echo "\"
                        ";
            // line 38
            if (($context["type"] == twig_get_attribute($this->env, $this->source, ($context["params"] ?? null), "type", array()))) {
                echo " selected ";
            }
            echo ">
                    ";
            // line 39
            echo twig_escape_filter($this->env, $context["type"], "html", null, true);
            echo "
                </option>
            ";
        }
        $_parent = $context['_parent'];
        unset($context['_seq'], $context['_iterated'], $context['_key'], $context['type'], $context['_parent'], $context['loop']);
        $context = array_intersect_key($context, $_parent) + $_parent;
        // line 42
        echo "        </select>
        <label for=\"d-task-select\">Task</label>
        <select name=\"d-task-select\" id=\"d-task-select\">
            ";
        // line 45
        $context['_parent'] = $context;
        $context['_seq'] = twig_ensure_traversable(($context["tasks"] ?? null));
        foreach ($context['_seq'] as $context["_key"] => $context["task"]) {
            // line 46
            echo "                <option value=\"";
            echo twig_escape_filter($this->env, $context["task"], "html", null, true);
            echo "\"
                        ";
            // line 47
            if (($context["task"] == twig_get_attribute($this->env, $this->source, ($context["params"] ?? null), "task", array()))) {
                echo " selected ";
            }
            echo ">
                    ";
            // line 48
            echo twig_escape_filter($this->env, $context["task"], "html", null, true);
            echo "
                </option>
            ";
        }
        $_parent = $context['_parent'];
        unset($context['_seq'], $context['_iterated'], $context['_key'], $context['task'], $context['_parent'], $context['loop']);
        $context = array_intersect_key($context, $_parent) + $_parent;
        // line 51
        echo "        </select>
        <label for=\"d-letter-select\">Letter</label>
        <select name=\"d-letter-select\" id=\"d-letter-select\">
            ";
        // line 54
        $context['_parent'] = $context;
        $context['_seq'] = twig_ensure_traversable(($context["letters"] ?? null));
        foreach ($context['_seq'] as $context["_key"] => $context["letter"]) {
            // line 55
            echo "                <option value=\"";
            echo twig_escape_filter($this->env, $context["letter"], "html", null, true);
            echo "\"
                        ";
            // line 56
            if (($context["letter"] == twig_get_attribute($this->env, $this->source, ($context["params"] ?? null), "letter", array()))) {
                echo " selected ";
            }
            echo ">
                    ";
            // line 57
            echo twig_escape_filter($this->env, $context["letter"], "html", null, true);
            echo "
                </option>
            ";
        }
        $_parent = $context['_parent'];
        unset($context['_seq'], $context['_iterated'], $context['_key'], $context['letter'], $context['_parent'], $context['loop']);
        $context = array_intersect_key($context, $_parent) + $_parent;
        // line 60
        echo "        </select>

        <input type=\"hidden\"
               name=\"_csrf\"
               value=\"";
        // line 64
        echo twig_escape_filter($this->env, ($context["token"] ?? null), "html", null, true);
        echo "\"/>
        <input type='submit'
               value='Search'/>
    </form>
    <form id='directory-reset-search-form'
          action='";
        // line 69
        echo twig_escape_filter($this->env, ($context["baseURL"] ?? null), "html", null, true);
        echo "/directory-reset'
          method='get'
          encType=\"multipart/form-data\">
        <input type='submit'
               value='Reset'/>
    </form>

    ";
        // line 76
        if (($context["organizations"] ?? null)) {
            // line 77
            echo "        <ul>
            ";
            // line 78
            $context['_parent'] = $context;
            $context['_seq'] = twig_ensure_traversable(($context["organizations"] ?? null));
            foreach ($context['_seq'] as $context["_key"] => $context["org"]) {
                // line 79
                echo "                <li class=\"col-md-3\">
                    <a href=\"";
                // line 80
                echo twig_escape_filter($this->env, ($context["baseURL"] ?? null), "html", null, true);
                echo "/directory/";
                echo twig_escape_filter($this->env, call_user_func_array($this->env->getFilter('slugify')->getCallable(), array(twig_get_attribute($this->env, $this->source, $context["org"], "Name", array()))), "html", null, true);
                echo "\">";
                echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["org"], "Name", array()), "html", null, true);
                echo "</a>
                </li>
            ";
            }
            $_parent = $context['_parent'];
            unset($context['_seq'], $context['_iterated'], $context['_key'], $context['org'], $context['_parent'], $context['loop']);
            $context = array_intersect_key($context, $_parent) + $_parent;
            // line 83
            echo "        </ul>
    ";
        } else {
            // line 85
            echo "        ";
            echo twig_escape_filter($this->env, ($context["errorMessage"] ?? null), "html", null, true);
            echo "
    ";
        }
        // line 87
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
        return array (  207 => 87,  201 => 85,  197 => 83,  184 => 80,  181 => 79,  177 => 78,  174 => 77,  172 => 76,  162 => 69,  154 => 64,  148 => 60,  139 => 57,  133 => 56,  128 => 55,  124 => 54,  119 => 51,  110 => 48,  104 => 47,  99 => 46,  95 => 45,  90 => 42,  81 => 39,  75 => 38,  70 => 37,  66 => 36,  60 => 33,  50 => 26,  23 => 1,);
    }

    public function getSourceContext()
    {
        return new Twig_Source("", "index.twig", "/var/www/html/sites/all/modules/custom_homepage_bundle/modules/custom/cu_atoz/twig_templates/index.twig");
    }
}
