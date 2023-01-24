#include <stdio.h>
#include <stdlib.h>
#include <csbootcamp.h>

//mark phase

Mark(root)
If markedBit(root) = false then
                     markedBit(root) = true
                                       For each v referenced by root
                                       Mark(v)


// sweep phase

Sweep()
For each object p in heap
If markedBit(p) = true then
                  markedBit(p) = false
                                 else
                                     heap.release(p)