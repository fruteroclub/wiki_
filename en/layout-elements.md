# Layout elements {#layout_elements}

In this page you can find all the layout elements that can be used in the playbook, they have examples you can copy/paste in your text

* [Headings](#headings)
* [Paragraphs](#paragraphs)
* [Lists](#lists)
* [Tasks list](#tasks)
* [Links](#links)
* [Footnotes](#footnotes)
* [Code](#code)
* [Blockquote](#blockquote)
* [Special blockquotes](#specialblockquote)
* [Tables](#tables)
* [Double column layout](#double_column)
* [Images](#images)
* [Video](#video)
* [PDF embed](#pdf)
* [Book Cover](#cover)
* [Glossary](#glossary)

---

# Headings {#headings}

The following syntax will output various weights of headings, from `<h1>` to `<h6>`

```
# Heading H1

## Heading H2

### Heading H3

#### Heading H4

##### Heading H5

###### Heading H6
```

See the resulting output below:

# Heading H1

## Heading H2

### Heading H3

#### Heading H4

##### Heading H5

###### Heading H6

> Headings make use of the [`anchorjs`](https://plugins.gitbook.com/plugin/anchorjs) plugin

### Heading with ID

It's also possible to have headings with `id`, so you can link directly to them.
The following syntax
``` 
# This is an H1 Heading with a "\#title" id {#title}
```

Will give the following result:
# This is an H1 Heading with a "\#title" id {#title}

---

# Paragraphs {#paragraphs}

Regular paragraph text

```
**Bold text**
```
**Bold text**

```
_Italic text_
```
_Italic text_

```
_**Bold and italic text**_
```
_**Bold and italic text**_

```
~~Strikethrough text~~
```
~~Strikethrough text~~

---

# Lists {#lists}

Of course it's possible to have lists in your text. Please check the following syntax:
```
1. First ordered list item
2. Another item
   * Unordered sub-list.
3. Actual numbers don't matter, just that it's a number
   1. Ordered sub-list
4. And another item.

   You can have properly indented paragraphs within list items. Notice the blank line above, and the leading spaces \(at least one, but we'll use three here to also align the raw Markdown\).

   To have a line break without a paragraph, you will need to use two trailing spaces.  
   Note that this line is separate, but within the same paragraph.  
   \(This is contrary to the typical GFM line break behaviour, where trailing spaces are not required.\)

5. And another item after a lot of text


6. You can start a new list after two line breaks
```

The above will generate the following output:
1. First ordered list item
2. Another item
   * Unordered sub-list.
3. Actual numbers don't matter, just that it's a number
   1. Ordered sub-list
4. And another item.

   You can have properly indented paragraphs within list items. Notice the blank line above, and the leading spaces \(at least one, but we'll use three here to also align the raw Markdown\).

   To have a line break without a paragraph, you will need to use two trailing spaces.  
   Note that this line is separate, but within the same paragraph.  
   \(This is contrary to the typical GFM line break behaviour, where trailing spaces are not required.\)

5. And another item after a lot of text


6. You can start a new list after two line breaks

---

# Tasks list {#tasks}
> This feature requires the [`to-do`](https://plugins.gitbook.com/plugin/checkbox) plugin

A syntax like the following
```
- [ ] task 1
- [x] task 2
```

Will generate the following output
- [ ] task 1
- [x] task 2

---

# Links {#links}

You can link to a [heading within the same article](#layout_elements) or to [an heading in another article](/chapter-1/content.md#content) with the following syntax:
```
You can link to a [heading within the same article](#layout_elements) or to [an heading in another article](/chapter-1/content.md#content)
```

You can link to an [article](/chapter-1/content.md)
(but if you are linking to a `readme` file you need to use a special syntax `[article](/chapter-1/README.md/#readme)`) with the following syntax:
```
You can link to an [article](/chapter-1/content.md)
(but if you are linking to a `readme` file you need to use a special syntax `[article](/chapter-1/README.md/#readme)`)
```

You can of course always link to [whatever web address](http://www.google.com) with the following syntax:
```
You can of course always link to [whatever web address](http://www.google.com)
```

---

# Footnotes {#footnotes}

You can have footnotes wherever you want in your text and page.
Please check the following syntax:
```
footnote[^1]

footnote [link](/www.google.com)[^2]

[^1]: this is a plain footnote

[^2]: link: [http://www.google.com](http://www.google.com)
```

That will generate the following output:

footnote[^1]

footnote [link](/www.google.com)[^2]

[^1]: this is a plain footnote

[^2]: link: [http://www.google.com](http://www.google.com)


---

# Code {#code}
> This feature makes use of the [`copy-code-button`](https://plugins.gitbook.com/plugin/copy-code-button) plugin, but it is not a necessary plugin 

```
this is a
code block
```

```css
/* this is a code block with syntax highlighting */  
#title {  
  padding-bottom: .2rem;  
  border-bottom: 1px solid #eaecef;  
}
```

this is inline `code` instead

**_IMPORTANT_** Please check the book source to see the correct syntax to insert code in your text.

### Include code from an external file
> This feature requires the [`include-codeblock`](https://plugins.gitbook.com/plugin/include-codeblock) and [`ace`](https://plugins.gitbook.com/plugin/ace) plugins

[include](../code/timer.ino)

**_IMPORTANT_** Please check the book source to see the correct syntax to insert code in your text.

---

# Blockquote {#blockquote}

A blockquote can be used to highlight a block of text with special importance.

The following syntax:
```
> this is a very famous quote, you should read it 'cause it will make you smarter.
>
> and it can continue on a second paragraph.  
> and you can also have a single line break without starting a new paragraph
```

Would give the following result:
> this is a very famous quote, you should read it 'cause it will make you smarter.
>
> and it can continue on a second paragraph.  
> and you can also have a single line break without starting a new paragraph

---

# Special blockquotes {#specialblockquote}
> This feature requires the [`styled-blockquotes`](https://plugins.gitbook.com/plugin/styled-blockquotes) plugin

Special blockquotes are available to highlight pieces of text throughout the book.

The following syntax
```
> **info**
> This is an info blockquote with icon (the icon will not render in the PDF...)
```

Would give the following result:

> **info**
> This is an info blockquote with icon (the icon will not render in the PDF...)

**_IMPORTANT_**
* Please check the playbook source for all the tags to show different icons and blockquote style
* Also, please be aware that the icons won't be shown in the PDF version of the book

> **info no-icon**
> This is an info blockquote without icon

(you need characters in between two sequential blockquotes)

> **tip**
> This is a tip blockquote with icon (the icon will not render in the PDF...)

(you need characters in between two sequential blockquotes)

> **tip no-icon**
> This is a tip blockquote without icon

(you need characters in between two sequential blockquotes)

> **danger**
> This is a danger blockquote with icon (the icon will not render in the PDF...)

(you need characters in between two sequential blockquotes)

> **danger no-icon**
> This is a danger blockquote without icon

(you need characters in between two sequential blockquotes)

> **success**
> This is a success blockquote with icon (the icon will not render in the PDF...)

(you need characters in between two sequential blockquotes)

> **success no-icon**
> This is a success blockquote without icon

---

# Tables {#tables}

A syntax like the following:
```
|you|can|create|tables|
|-|-|-|-|
|no matter the amount|of columns or rows|as long as you remember that tables are fluid and not responsive, and usually have layout problems with smaller resolutions||
|another row|it looks alternated|and can have one less column|
|some markdown syntax is accepted in cells|**bold text**|![](../assets/rodrigomuller-acdc.jpg)|_italic text_|
|<ol><li>of course</li><li>you can</li><li>have html</li><li>in a cell</li></ol>|
```

Would create a table like:

|you|can|create|tables|
|-|-|-|-|
|no matter the amount|of columns or rows|as long as you remember that tables are fluid and not responsive, and usually have layout problems with smaller resolutions||
|another row|it looks alternated|and can have one less column|
|some markdown syntax is accepted in cells|**bold text**|![](../assets/rodrigomuller-acdc.jpg)|_italic text_|
|<ol><li>of course</li><li>you can</li><li>have html</li><li>in a cell</li></ol>|


---

# Double column layout {#double_column}
> This feature requires the [`layout-tags`](https://github.com/WeMakecc/gitbook-plugin-layout-tags) plugin

It is possible to have text on two columns with the following syntax:
```
{% raw %}
{% grid %}
  {% col1 %}a
  {% col2 %}b
{% endgrid %}
{% endraw %}
```

See result:

{% grid %}
  {% col1 %}This is the content of the first column. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi pharetra ornare lectus, id maximus elit congue et. Sed consectetur tincidunt felis eget eleifend. Morbi quis magna at urna imperdiet lobortis. Curabitur rutrum, tellus aliquam condimentum rhoncus, tellus tellus dapibus enim, ut malesuada leo libero vitae erat.
  {% col2 %}This is the content of the second column, YAAAAYYY!!! Proin blandit malesuada mi, sollicitudin dictum tellus placerat ac. Donec sit amet faucibus lorem. Vestibulum pulvinar diam mauris, nec blandit leo gravida quis. Praesent et odio nec enim egestas dictum.
{% endgrid %}


**_IMPORTANT_** It is very important to note:
- only two columns are supported
- columns need to be called `col1` and `col2`
- content from column one won't automagically overflow in column two, so the author needs to decide when to end column one and when to start column two
- markdown syntax is not supported within columns


> It's possible to achieve the same layout without using the `layout-tags` with a little bit of HTML:
```html
<div style="float: left; width: 48%; margin-right: 2%;">
This is the content for the first column
</div>
<div style="float: left; width: 48%; margin-left: 2%;">
This is the content for the second column
</div>
<div style="clear: both"></div>
```

See result:
<div style="float: left; width: 48%; margin-right: 2%;">
This is the content for the first column. Sed consectetur tincidunt felis eget eleifend. Morbi quis magna at urna imperdiet lobortis.
</div>
<div style="float: left; width: 48%; margin-left: 2%;">
This is the content for the second column. Proin blandit malesuada mi, sollicitudin dictum tellus placerat ac. Donec sit amet faucibus lorem.
</div>
<div style="clear: both"></div>



---

# Images {#images}
The following markdown syntax
```markdown
![ ](../assets/rodrigomuller-acdc.jpg)
```

Would output a regular image, center aligned.

![ ](../assets/rodrigomuller-acdc.jpg)



If a caption is needed, you can input some text between the brackets
> This feature requires the [`image-captions`](https://plugins.gitbook.com/plugin/image-captions-extended) plugin

```markdown
![this is an image caption](../assets/rodrigomuller-acdc.jpg)
```

This syntax would then output a regular image with a caption

![this is an image caption](../assets/rodrigomuller-acdc.jpg)



#### Aligning images
> This feature requires the [`layout-tags`](https://github.com/WeMakecc/gitbook-plugin-layout-tags) plugin

For instance, to align an image to the left you can use the following syntax
```
{% image %}
  {% image_url "test image", "200px", "left", "margin-right:10px" %}../assets/rodrigomuller-acdc.jpg
  {% image_text %}
{% endimage %}
```
{% image %}
  {% image_url "test image", "200px", "left", "margin-right:10px" %}../assets/rodrigomuller-acdc.jpg
  {% image_text %}
{% endimage %}

**_IMPORTANT_** It is mandatory to always define all the attributes of the `image_url` tag, being in order of appearance:
- alternative text `alt=""`
- width of the image `width=""`
- alignment of the image `align=""`
- style attributes `style=""`

Also, it is mandatory to always have the `image-text` tag, you can leave it empty if you don't need text to wrap around the image.

If you instead DO NEED text to wrap around the image, then this text needs to live right after the `image_text` tag, see example:
```
{% image %}
  {% image_url "test image", "200px", "left", "margin-right:10px" %}../assets/rodrigomuller-acdc.jpg
  {% image_text %}Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla justo lacus, mollis id orci eget, dignissim tincidunt mauris. Etiam eu dui nunc. Vestibulum pharetra sapien et lacus consectetur congue. Sed laoreet lectus arcu, sit amet rutrum mauris ornare et. In scelerisque varius enim, sit amet sollicitudin ipsum sodales ac. Mauris at lorem eget elit laoreet gravida eu at lorem. Sed scelerisque sagittis augue, in tempor risus consequat in. Integer mattis sem ac justo scelerisque, eu iaculis nulla porttitor. Morbi elementum nec felis ut congue. Maecenas faucibus odio id placerat pulvinar. Integer quis mauris viverra, sollicitudin odio non, tincidunt eros. Nunc cursus leo sem, sit amet venenatis diam elementum quis. Mauris dapibus varius suscipit.
{% endimage %}
```
{% image %}
  {% image_url "test image", "200px", "left", "margin-right:10px" %}../assets/rodrigomuller-acdc.jpg
  {% image_text %}Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla justo lacus, mollis id orci eget, dignissim tincidunt mauris. Etiam eu dui nunc. Vestibulum pharetra sapien et lacus consectetur congue. Sed laoreet lectus arcu, sit amet rutrum mauris ornare et. In scelerisque varius enim, sit amet sollicitudin ipsum sodales ac. Mauris at lorem eget elit laoreet gravida eu at lorem. Sed scelerisque sagittis augue, in tempor risus consequat in. Integer mattis sem ac justo scelerisque, eu iaculis nulla porttitor. Morbi elementum nec felis ut congue. Maecenas faucibus odio id placerat pulvinar. Integer quis mauris viverra, sollicitudin odio non, tincidunt eros. Nunc cursus leo sem, sit amet venenatis diam elementum quis. Mauris dapibus varius suscipit.
{% endimage %}

**_IMPORTANT_** regular markdown tags won't affect text that wraps an image!


> It's also possible to avoid using the `layout-tags` plugin and align images using a bit of HTML:
```html
<p style="overflow:hidden">
  <img src="../assets/rodrigomuller-acdc.jpg" alt="this is a nice image" width="200px" align="left" style="margin-right:10px">
  Here is some text that will wrap around the image.
</p>
```

<p style="overflow:hidden">
  <img src="../assets/rodrigomuller-acdc.jpg" alt="this is a nice image" width="200px" align="left" style="margin-right:10px">
  Here is some text that will wrap around the image.
</p>



---

# Video {#video}
> This feature requires the [`noembed`](https://plugins.gitbook.com/plugin/noembed) plugin

You can embed videos in a gitbook. They will be displayed as an interactive element in website view and as a link in PDF view.

Videos can be embedded from youtube with the following syntax:
```markdown
{{ 'https://www.youtube.com/watch?v=U0sZulbldWg' | video }}
```

{{ 'https://www.youtube.com/watch?v=U0sZulbldWg' | video }}

From Vimeo as well with the same syntax above:
{{ 'https://vimeo.com/174632471' | video }}


---

# PDF embed {#pdf}
> This feature requires the [`embed-pdf`](https://plugins.gitbook.com/plugin/embed-pdf) plugin

It is also possible to embed PDF files in the gitbook.
[Please note that, unfortunately, the generated links are broken in the PDF downloaded from gitbook.com]

A syntax like the following:
```
{% pdf src="../assets/opencare-graphic-guide.pdf", width="100%", height="700" %}{% endpdf %}
```

Would create the following result
{% pdf src="../assets/opencare-graphic-guide.pdf", width="100%", height="700" %}{% endpdf %}


---

# Book Cover {#cover}

It is possible to add a cover for the PDF and Ebook versions of the book.
There are two possible ways of adding a cover.

**Auto cover plugin**
> This feature requires the [`autocover`](https://plugins.gitbook.com/plugin/autocover) plugin


Open the `book.json` file in the root directory of your book and:
* edit the `"title": "My Book"` value with your book title
* edit the `"author": "Author"` value with your book author details
* scroll down, find the `pluginsConfig` and `autocover` keys and
  * inside the `font` value you can:
    * edit the `size` value with desired font size (20 min suggested)
    * edit the `family` value with the desired font face (for a list of web safe fonts please check [here](https://www.w3schools.com/cssref/css_websafe_fonts.asp)) 
    * edit the `color` value with your desired hex color (this would only affect the font color)
  * leave the `size` value unchanged
  * inside the `background` value you can edit the `color` value with your desired background color in hex


**Custom cover**
Create an artwork with the software of your choice following this criteria:
* Save the file in `JPEG` format with name `cover.jpg` in the root of the directory of the book. Adding a `cover_small.jpg` will specify a smaller version of the cover.
* Size of 1800x2360 pixels for `cover.jpg`, 200x262 for `cover_small.jpg`

When you are done please head to the `book.json` file in the root directory of your book and:
* delete the `"autocover"` value inside the `"plugins"` array
* delete the
```
"autocover": {
            "font": {
                "size": null,
                "family": "Impact",
                "color": "#FFF"
            },
            "size": {
                "w": 1800,
                "h": 2360
            },
            "background": {
                "color": "#09F"
            }
        }
```
found inside the `pluginsConfig` key

**_IMPORTANT_** Please, when deleting code from the `book.json`, always make sure you also remove the comma that might precede the line you want to remove. _The build of the book will break otherwise_

For instance, remove the last comma in this situation
```
"plugins": [
        "anchorjs",
        "styled-blockquotes",
        "todo",
        "include-codeblock",
        "ace",
        "copy-code-button",
        "image-captions",
        "noembed",
        "embed-pdf",
    ]
```
Correct syntax:
```
"plugins": [
        "anchorjs",
        "styled-blockquotes",
        "todo",
        "include-codeblock",
        "ace",
        "copy-code-button",
        "image-captions",
        "noembed",
        "embed-pdf"
    ]
```

---

# Glossary {#glossary}

It is possible to have a glossary of some terms recurring in the book.

The terms need to be added in the [GLOSSARY.md](/GLOSSARY.md) page in the form of `h2` headings with some added text:

```
## Term
Definition for this term

## Another term
Definition for another term
```

All the terms present in the glossary will be highlighted throughout the book.

**_IMPORTANT_** Please note that the glossary won't be generated in the PDF export