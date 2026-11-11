/* LEVEL_15:0x01F3A8 -- placement copy of LEVEL_01_025098.c: copies a word from one callee's result record into another's. */
extern int func_01E990(int first, int second);
extern char *func_01E9D8(int first, int second);

void func_01F3A8(int first, int second)
{
    int *destination = (int *)func_01E990(first, second);
    char *source = func_01E9D8(first, second);
    destination[0x10] = *(int *)(source + 0x38);
}
