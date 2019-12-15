# GeneralFifo
## Description:
A general C implementation of a single type FIFO. The item's size must be
specified at runtime for Initialization.  

## Implementation details:
The fifo is implemented via a list of tables. When a table fills,
another one is allocated and the new table's size is proportional to the number of tables allocated.
  
## Function list:
### Initialization & Termination
- initFifo
- freeFifo 
### Properties
- isFifoEmpty

### Search
- itemExists

### Insertion & Removal
- queue
- dequeue

## Dependencies:
- stdlib
- string

