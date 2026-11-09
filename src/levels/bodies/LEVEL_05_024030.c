/* LEVEL_05:0x024030 -- placement copy of LEVEL_01_025098.c: copies a word from one callee's result record into another's. */
extern int func_0235C0(int first, int second);
extern char *func_023608(int first, int second);

void func_024030(int first, int second)
{
    int *destination = (int *)func_0235C0(first, second);
    char *source = func_023608(first, second);
    destination[0x10] = *(int *)(source + 0x38);
}
