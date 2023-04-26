# exp11
## linked-list
A linked list is a dynamic data structure commonly used in computer programming for storing and manipulating collections of data. A linked list is made up of a sequence of nodes, where each node contains a value and a reference (i.e., pointer) to the next node in the sequence.

There are several types of linked lists, including singly linked lists, doubly linked lists, and circular linked lists. In a singly linked list, each node contains a reference to the next node in the sequence, while in a doubly linked list, each node contains references to both the next and previous nodes in the sequence. In a circular linked list, the last node in the sequence points back to the first node.

Linked lists provide several advantages over other data structures, such as arrays. One advantage is that linked lists can be dynamically resized at runtime by simply adding or removing nodes, whereas arrays are typically fixed in size. Linked lists also allow for efficient insertion and deletion of nodes at any position in the list, whereas arrays require shifting elements to make room for new elements.

However, linked lists also have some disadvantages. For example, they typically require more memory than arrays because each node must contain a reference to the next node. Linked lists also have slower access times than arrays because nodes must be traversed sequentially to find a specific element.

Implementing a linked list in C involves defining a node structure using a `struct`, and writing functions to create, insert, delete, and search nodes in the list. The node structure typically contains a data field to store the value of the node, and a next (and/or previous) field to store a pointer to the next (and/or previous) node in the list.

Common operations on linked lists include inserting a node at the beginning or end of the list, inserting a node at a specific position, deleting a node at a specific position, and searching for a node with a specific value. Linked lists can also be used to implement other data structures such as stacks, queues, and hash tables.

In summary, a linked list is a useful data structure for storing and manipulating collections of data. While they have some disadvantages compared to other data structures, linked lists are often the best choice for certain applications, such as those that require dynamic resizing or efficient insertion and deletion.
