/* LEVEL_10:0x024A00 -- placement copy of LEVEL_01_025098.c: copies a word from one callee's result record into another's. */
extern int func_023F90(int first, int second);
extern char *func_023FD8(int first, int second);

void func_024A00(int first, int second)
{
    int *destination = (int *)func_023F90(first, second);
    char *source = func_023FD8(first, second);
    destination[0x10] = *(int *)(source + 0x38);
}
