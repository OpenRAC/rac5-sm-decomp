/* LEVEL_23:0x0230E0 -- placement copy of LEVEL_01_025098.c: copies a word from one callee's result record into another's. */
extern int func_0226C8(int first, int second);
extern char *func_022710(int first, int second);

void func_0230E0(int first, int second)
{
    int *destination = (int *)func_0226C8(first, second);
    char *source = func_022710(first, second);
    destination[0x10] = *(int *)(source + 0x38);
}
