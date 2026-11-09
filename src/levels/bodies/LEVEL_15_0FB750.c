/* LEVEL_15:0x0FB750 -- passes one table row per list element to a helper, walking the list and the rows together. */

extern void func_0294D8(void *a0, int a1, int a2);
extern char D_002ECD18[];

void func_0FB750(void **list)
{
    int i;
    char *row;

    row = D_002ECD18;
    i = 0;
    do {
        func_0294D8(row, *(int *)((char *)*list + 4), 0xFFFF);
        list++;
        row += 0xB0;
        i--;
    } while (i >= 0);
}
