# Huffman Encoding

This encoding approach is named after David Huffman.  It provides a simple way of producing
a set of replacement bits.  The algorithm is easy to describe, simple to code, and comes 
with a proof that is optimal.

The algorithm finds the strings of bits for each letter by creating a tree and using the 
tree to read off the codes.  The common letters end up near the top of the tree, while the 
least common letters end up near the bottom.  The paths from the root of the tree to the 
node containing the character are used to compute the bit patterns.

Here's the basic idea:

1. For each x in A, create a node n(x)
2. Attach a value v(n(x)) = p(x) to this node.
3. Add each of these raw nodes to a set T that is a collection of trees. At this point, there is one single node tree for each character in A.
4. Repeat these steps until there is only one tree left in T:
    (a) Check the values v(n(i)) of the root node of each tree.  Find the two trees with the smallest values
    (b) Remove the two trees from T.  Let n(a) and n(b) stand for the two nodes at the roots of these trees.
    (c) Create a new node, n(c), and attach n(a) and n(b) as the left and right descendants.  This creates a new tree from the old two trees.
    (d) Set v(n(c)) = v(n(a)) + v(n(b))
    (e) Insert the new tree into T. The number of trees in T should have decreased by one for each pass through the loop.

The final tree is used to find bit patterns for each letter by tracing the path from the root to the leaf containing 
that node.  The left path coming off each iterator node is designated a '1' and the right path is designated a '0'.  
The string of values for each branch along the path will be the value used to replace the character. 