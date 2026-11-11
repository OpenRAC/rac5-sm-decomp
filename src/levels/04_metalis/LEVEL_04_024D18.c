/* LEVEL_04:0x024D18 -- placement copy of LEVEL_01_025098.c: copies a word from one callee's result record into another's. */
extern int func_0242A8(int first, int second);
extern char *func_0242F0(int first, int second);

void func_024D18(int first, int second)
{
    int *destination = (int *)func_0242A8(first, second);
    char *source = func_0242F0(first, second);
    destination[0x10] = *(int *)(source + 0x38);
}
