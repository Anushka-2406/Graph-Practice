# Graph-Practice

1. Topological Sort : Linear ordering of vertices such that if there is an edge between u and v then u appears before v in that ordering.
(Only in DAG).

 ## Questions : 
_When the question is about something before something or cycle detection.

1. Detect cycle in Directed graph (We will implement topo sort using bfs [Kahn's Algo] and then if topo.size()<N then it is because there is a cycle in it.)
2. Course schedule 1 and 2
      In 1 ; we just have to check for cycle, if not return true.
      In 2 : if no cycle, then return topo sort answer vector else return empty string.

3. Find Eventual Safe states : (Reverse the graph and store the topo sort. The one’s which are not safe nodes will automatically not implemented.)

4. Alien Dictionary
5. Shortest path in DAG
6. Shortest path in undirected graph with unit weights.
7. Word ladder 1 and 2
   
