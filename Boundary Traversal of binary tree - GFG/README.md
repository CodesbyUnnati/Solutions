# Boundary Traversal of binary tree
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a Binary Tree, find its Boundary Traversal. The traversal should be in the following order:&nbsp;</span></p>

<ol>
	<li><span style="font-size:18px"><strong>Left boundary nodes:</strong>&nbsp;defined as the path from the root to the left-most node&nbsp;</span><span style="font-size:18px">ie- the&nbsp;leaf node you could reach when you always travel preferring&nbsp;the left subtree over the&nbsp;right subtree.&nbsp;</span></li>
	<li><span style="font-size:18px"><strong>Leaf nodes:&nbsp;</strong>All the leaf nodes except for the ones that are part of left or right boundary.</span></li>
	<li><span style="font-size:18px"><strong>Reverse right boundary nodes:</strong>&nbsp;defined as the path from&nbsp;the right-most node to the root. The&nbsp;right-most node is&nbsp;the&nbsp;leaf node you could reach when you always travel preferring&nbsp;the right subtree over the&nbsp;left subtree.&nbsp;Exclude the root from this as it was already included in the traversal of left boundary nodes.</span></li>
</ol>

<p><span style="font-size:18px"><strong>Note:</strong> If the root doesn't have a left subtree or right subtree, then the root itself is the left&nbsp;or right boundary.&nbsp;</span><br>
<br>
<strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
        </span></strong><span style="font-size:18px">1
&nbsp;     /   \
&nbsp;    2     3</span><strong><span style="font-size:18px">&nbsp;   
   
Output: </span></strong><span style="font-size:18px">1 2 3</span><strong><span style="font-size:18px">
Explanation:
</span></strong><span style="font-size:18px"><strong><img alt="" src="https://contribute.geeksforgeeks.org/wp-content/uploads/BT.jpg" class="img-responsive"></strong></span><strong><span style="font-size:18px">
</span></strong>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:</span></strong>
<span style="font-size:18px">&nbsp;         20
&nbsp;       /   \
&nbsp;      8     22
&nbsp;    /   \    \
&nbsp;   4    12    25
&nbsp;       /  \ 
&nbsp;      10   14 
</span><strong><span style="font-size:18px">
Output: </span></strong><span style="font-size:18px">20 8 4 10 14 25 22
<strong>Explanation: </strong></span>
<span style="font-size:18px"><a href="https://contribute.geeksforgeeks.org/wp-content/uploads/boundary.png" target="_blank"><img alt="" src="https://contribute.geeksforgeeks.org/wp-content/uploads/boundary.png" style="float:left; height:300px; width:380px" class="img-responsive"></a></span>
</pre>

<p>&nbsp;</p>

<p>&nbsp;</p>

<p>&nbsp;</p>

<p>&nbsp;</p>

<p>&nbsp;</p>

<p>&nbsp;</p>

<p>&nbsp;</p>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Y</span></strong><strong><span style="font-size:18px">our Task:</span></strong><br>
<span style="font-size:18px">This is a function problem. You don't have to take input. Just complete the <strong>function printBoundary()&nbsp;</strong>that takes the root node<strong>&nbsp;</strong>as input<strong>&nbsp;</strong>and returns an array containing&nbsp;the boundary values in anti-clockwise.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N).&nbsp;<br>
<strong>Expected Auxiliary Space:</strong> O(Height of the Tree).</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 ≤ Number of nodes ≤ 10<sup>5</sup></span><br>
<span style="font-size:18px">1 ≤ Data of a node ≤ 10<sup>5</sup></span></p>
 <p></p>
            </div>