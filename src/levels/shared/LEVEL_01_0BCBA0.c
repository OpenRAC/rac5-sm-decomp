/* LEVEL_01:0x0BCBA0 -- pops the last word of a list into the output slot; returns 1 on success. */
typedef struct List { int items[8]; int count; } List;
int func_0BCBA0(List *list, int *output)
{
    if (list->count == 0) {
        return 0;
    }
    if (output == 0) {
        return 0;
    }
    list->count--;
    *output = list->items[list->count];
    return 1;
}
