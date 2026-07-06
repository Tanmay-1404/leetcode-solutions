Learnt a new approach: Reversing the edges of a graph.

Terminal node: There are no outgoing edges from the node.
Safe node: Every possible path starting from that node leads to a terminal node.

Observations:
1. The nodes involved in a cycle cannot be safe nodes as well as terminal nodes.
2. The terminal nodes are safe nodes as well.

Approach learnt: Reverse the graph and use topological sort according to the indegree of the nodes.
