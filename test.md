<table>
    <tr>
        <td>Foo</td>
    </tr>
</table>

This is an H1
=============

This is an H2
-------------

# H1
## H2
###### H6

depends on the head '#' numbers
# H1 #
## H2 ###
### H3 ########

## Blockquote

> This is a blockquote.

> This is the first level of quoting.
> > This is nested blockquote.
> Back to the first level.

> ## H2
> 1. entry 1
> 2. entry 2

## Unsorted List

* Red
* Green
* Blue

equals with 

+ Red
+ Green
+ Blue

equals with 
- Red
- Green
- Blue

## Sorted List

1. Bird
2. McHale
3. Parish

> It won't have any effect on the output of HTML results, even if you
> input like below

3. Bird
1. McHale
8. Parish

> You would get the same HTML output like
<ol>
<li>Bird</li>
<li>McHale</li>
<li>Parish</li>
</ol>

*	Lorem ipsum dolor sit amet, consecteture adipiscing elit.
	Aliquam asdjflka asueikjtqkle fadsjklaut ksdfjklasutiomfwe,
	jasdfjkl asjeioutewlkjfdsaiout asdjkljtioeuwqkfkdsjlauit

* Bird

* Magic

> with the empty line, you will get

<ul>
<li><p>Bird</p></li>
<li><p>Magic</p></li>
</ul>

1986. What a great season.
1986\. What a great season.

* * *

*********************- - -

<div class="footer">
	&copy; 2004 Foo Corporation
</div>

- - -

would be transform into

* * *

<pre><code>&lt;div class="footer"&gt;
	&amp;copy; 2004 Foo Corporation
&lt;/div&gt;
</code></pre>

- - -

This is [an example](http://example.com/"Tile") inline link.
See my [About](/about/) page for details.

This is [an example][id] reference-style link.

[id]: http://example.com/ "Optional Title Here"

[Google][]

[Google]: http://google.com.hk/

*single asterisks*
_single underscores_
**double asterisks**
__double underscores__

``` This is code here ```

![Alt text][id]
[id]: url/to/image "Optional title attribute"


