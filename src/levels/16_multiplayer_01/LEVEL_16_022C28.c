/* LEVEL_16:0x022C28 -- returns the cell field, or -1 for an invalid row.
 * The live column argument is forwarded unchanged. */
typedef struct {
    char data[0x54];
} Cell;

extern Cell *func_0220C8(unsigned int row, int column);

int func_022C28(unsigned int index, int column)
{
  if (!(index >= 25))
  {
    return *((int *) (((char *) func_0220C8(index, column)) + 0x3c));
  }
  {
    return -1;
  }
}
