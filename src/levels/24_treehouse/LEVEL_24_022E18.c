/* LEVEL_24:0x022E18 -- placement copy of LEVEL_01_025098.c: copies a word from one callee's result record into another's. */
extern int func_022400(int first, int second);
extern char *func_022448(int first, int second);

void func_022E18(int first, int second)
{
    int *destination = (int *)func_022400(first, second);
    char *source = func_022448(first, second);
    destination[0x10] = *(int *)(source + 0x38);
}
