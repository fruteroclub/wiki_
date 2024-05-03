# BOM {#bom}

Here you can find a template for a BOM list.
This could turn particularly helpful when creating a list of the materials needed to make a project.

> The following layout requires the [`layout-tags`](https://github.com/WeMakecc/gitbook-plugin-layout-tags) plugin

It is possible to have a BOM list layout with the following markdown syntax:
```
{% bom %}
    {% bom_image "potentiometer", "70px", "left", "margin-right:10px" %}../assets/pot.jpg
    {% bom_description %}10k Potentiometer (<a href="https://www.sparkfun.com/products/9939">link</a>)
    {% bom_quantity %}x 5
{% endbom %}

{% bom %}
    {% bom_image "resistor", "70px", "left", "margin-right:10px" %}../assets/resistor.jpg
    {% bom_description %}100ohm Resistors
    {% bom_quantity %}x 10
{% endbom %}

{% bom %}
    {% bom_image "capacitor", "70px", "left", "margin-right:10px" %}../assets/capacitor.jpg
    {% bom_description %}4700uF Capacitors
    {% bom_quantity %}x 2
{% endbom %}
```

See result:

{% bom %}
    {% bom_image "potentiometer", "70px", "left", "margin-right:10px" %}../assets/pot.jpg
    {% bom_description %}10k Potentiometer (<a href="https://www.sparkfun.com/products/9939">link</a>)
    {% bom_quantity %}x 5
{% endbom %}

{% bom %}
    {% bom_image "resistor", "70px", "left", "margin-right:10px" %}../assets/resistor.jpg
    {% bom_description %}100ohm Resistors
    {% bom_quantity %}x 10
{% endbom %}

{% bom %}
    {% bom_image "capacitor", "70px", "left", "margin-right:10px" %}../assets/capacitor.jpg
    {% bom_description %}4700uF Capacitors
    {% bom_quantity %}x 2
{% endbom %}


**_IMPORTANT_** It is very important to note:
- all tags are needed to be filled and displayed, removing one of the tags would turn into a display error


# BOM table {#bom_table}

> It's also possible to achieve a similar result without using the `layout-tags` with a standard table layout:
```markdown
|Item|Description|Quantity|
|-|-|-|
|![](../assets/pot-small.jpg)|[10k Potentiometer](https://www.sparkfun.com/products/9939)|x 5|
|![](../assets/resistor-small.jpg)|100ohm Resistor|x 10|
```

See result:

|Item|Description|Quantity|
|-|-|-|
|![](../assets/pot-small.jpg)|[10k Potentiometer](https://www.sparkfun.com/products/9939)|x 5|
|![](../assets/resistor-small.jpg)|100ohm Resistor|x 10|


**_IMPORTANT_** It is very important to note:
- don't write any text in the alternative text section of the image as it would break the layout! (eg. please avoid the following markdown `![potentiometer](../assets/pot-small.jpg)`)
- please always try to link images with transparent background since the alternate columns have a background color 













