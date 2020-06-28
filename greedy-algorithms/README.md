# Greedy Algorithm

A greedy algorithm is any algorithm that follows the problem-solving heuristic of making the
locally optimal choice at each stage with the intent of finding a global optimum. In many
problems, a greedy strategy does not usually produce an optimal solution, but nonetheless a
greedy heuristic may yield locally optimal solutions that approximate a globally optimal solution
in a reasonable amount of time.

For example, a greedy strategy for the travelling salesman problem (which is of a high computational complexity)
is the following heuristic: "At each step of the journey, visit the nearest unvisited city." This heuristic
does not intend to find a best solution, but it terminates in a reasonable number of steps; finding an optimal
solution to such a complex problem typically requires unreasonably many steps. In mathematical optimization,
greedy algorithms optimally solve combinatorial problems having the properties of matroids, and give constant-factor
approximations to optimization problems with submodular structure.

Reference : https://en.wikipedia.org/wiki/Greedy_algorithm#:~:text=%20In%20general%2C%20greedy%20algorithms%20have%20five%20components%3A,we%20have%20discovered%20a%20complete%20solution%20More%20

# This directory contains some of the implementation based on greedy algorithms