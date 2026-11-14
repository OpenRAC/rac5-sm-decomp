/* FRONTEND:0x022760 -- stores a word in the 16-entry table when the index is in range and returns 1, else 0. */
int func_022760(int *table, unsigned int index, int value)
{
    if (index < 16) {
        *(int *)((char *)table + (index << 2)) = value;
        return 1;
    }
    return 0;
}
