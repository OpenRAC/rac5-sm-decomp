/* LEVEL_01:0x0F09F0 -- moves the cursor node of a list to the next slot (relinks three words) and counts the move; returns the node that was linked in. */
int *func_0F09F0(void *self, int *list)
{
    int *cur = (int *)list[3];
    int *next = (int *)cur[1];
    int first = cur[0];
    int second = next[0];

    cur[1] = second;
    next[0] = first;
    cur[0] = (int)next;
    list[4] = list[4] + 1;
    return next;
}
