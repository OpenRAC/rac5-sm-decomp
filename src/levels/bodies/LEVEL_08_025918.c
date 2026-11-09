/* LEVEL_08:0x025918 -- placement copy of LEVEL_01_025098.c: copies a word from one callee's result record into another's. */
extern int func_024EA8(int first, int second);
extern char *func_024EF0(int first, int second);

void func_025918(int first, int second)
{
    int *destination = (int *)func_024EA8(first, second);
    char *source = func_024EF0(first, second);
    destination[0x10] = *(int *)(source + 0x38);
}
