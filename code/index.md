---
layout: default
---

### Code Examples
{:.text-center.font-weight-bold}

<div markdown="1" >
{% assign code_files = site.static_files | where: "code", true %}
{% for code in code_files %}
[{{ code.name }}]({{ code.path }})
{:.text-center}
{% endfor %}
</div>
