/* LEVEL_08:0x2033E8 -- rotates the cursor node of a list to the following slot (relinks three words), counts the move and returns the node. */
int *func_2033E8(void *self, int *list)
{
    int *cur = (int *)list[3];
    int *next = (int *)cur[1];
    int first = cur[0];
    int second = next[18];

    cur[1] = second;
    next[18] = first;
    cur[0] = (int)next;
    list[4] = list[4] + 1;
    return next;
}
