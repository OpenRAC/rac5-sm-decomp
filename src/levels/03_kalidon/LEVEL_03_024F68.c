/* LEVEL_03:0x024F68 -- placement copy of LEVEL_01_025098.c: copies a word from one callee's result record into another's. */
extern int func_0244F8(int first, int second);
extern char *func_024540(int first, int second);

void func_024F68(int first, int second)
{
    int *destination = (int *)func_0244F8(first, second);
    char *source = func_024540(first, second);
    destination[0x10] = *(int *)(source + 0x38);
}
