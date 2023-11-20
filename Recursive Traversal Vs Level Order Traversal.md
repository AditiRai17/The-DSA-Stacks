
When traversing a tree, depth first search (DFS) and breadth first search (BFS) are two common strategies that can be used. 
The difference between the two strategies lies in the order in which nodes are visited.

## Recursive Traversal / DFS
   1. When using recursion to traverse a tree in DFS order,the algorithm visits the left sub tree first, then the right subtree, and finally the root. 
   2. In other words, the algorithm explores the tree as deeply as possible along each branch before backtracking to explore other branches.
   3. This can be implemented using pre-order, in-order, or post-order traversal.

## Level Order Traversal / BFS
   1. When using recursion to traverse a tree in BFS order the algorithm visits all the nodes at a given depth before moving on to nodes at the next depth.
   2. In other words, the algorithm explores the tree level by level, starting from the root and moving down to the leaf nodes.
   3. This can be implemented using a queue to keep track of the nodes to be visited at each level.

#### The main difference between DFS and BFS is the order in which nodes are visited. 
DFS explores the tree along each branch before backtracking to explore other branches, while BFS explores the tree level by level. 
Depending on the problem being solved, one strategy may be more appropriate than the other. 

For example, 

  #### BFS is typically used for finding the shortest path between two nodes in a tree, 
  #### DFS may be used for searching for a specific node or checking if a path exists between two nodes.

