# EE599-HW4

Lei Ding

(github: https://github.com/lding-code/EE599-HW4.git)

Q1 

Implemented in Solution class as Filter, Map, and Reduce.
Tested with GTest.

Runtime:
Filter() = O(n);  (iterate through n elements and calculate reminder)
Map() = O(n);     (iterate through n elements and calculate the square)
Reduce() = O(n);  (iterate through n elements and perform addition operation for n-1 times)

Q2

Implemented as MaxHeap class under src/lib.

GetParentIndex, GetLeftIndex, GetRightIndex, GetLargestChildIndex, top, push, and pop methods are tested in GTest, with comment //Q2

Runtime:
GetParentIndex() = O(1);    (info can be directly accessed through struct)
GetLeftIndex() = O(1);
GetRightIndex() = O(1);
GetLargestChildIndex() = O(1);

top() = O(1);       (read first data in vector)
push() = O(1);      (push data to the end of vector)
pop() = O(1);       (erase data)

TrickleUp() = O(log(n))     only log(n) levels exist for n elements
TrickDown() = O(log(n))

Q3

Implemented as BST class under src/lib.
All methods (push, find, erase) are tested in GTest.
The constructor and destructor methods will also utilize those methods. Therefore, if an instance is correctly created and deleteded by the GTest, the methods should work properly.

Runtime:

push() = O(n) for worst case (all elements are in one child branch)
push() = O(log(n)) for best case (elements evenly distributed across the tree)

find() = O(n) for worst
find() = O(log(n)) for best

erase() = O(n) for worst
erase() = O(log(n)) for best

Q4

Implemented as BST method as toVector.
Tested in GTest

Runtime:
toVector() = O(n);  (all n elements need to be iterated)

Q5

Implemented in Solution class as HeapSort method.
Tested in GTest

Runtime:
HeapSort() = O(nlog(n)) + O(n) = O(nlog(n)) (complexity to put data in queue and get top from the queue)

Q6

Implemented in Solution class as FindLargest method.
Tested in GTest

Runtime:
FindLargest() = O(nlog(n))