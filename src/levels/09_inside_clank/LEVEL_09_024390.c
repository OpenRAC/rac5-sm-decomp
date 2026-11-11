/* LEVEL_09:0x024390 -- placement copy of LEVEL_01_025098.c: copies a word from one callee's result record into another's. */
extern int func_023920(int first, int second);
extern char *func_023968(int first, int second);

void func_024390(int first, int second)
{
    int *destination = (int *)func_023920(first, second);
    char *source = func_023968(first, second);
    destination[0x10] = *(int *)(source + 0x38);
}
