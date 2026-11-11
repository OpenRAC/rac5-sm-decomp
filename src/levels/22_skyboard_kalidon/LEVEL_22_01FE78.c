/* LEVEL_22:0x01FE78 -- placement copy of LEVEL_01_025098.c: copies a word from one callee's result record into another's. */
extern int func_01F460(int first, int second);
extern char *func_01F4A8(int first, int second);

void func_01FE78(int first, int second)
{
    int *destination = (int *)func_01F460(first, second);
    char *source = func_01F4A8(first, second);
    destination[0x10] = *(int *)(source + 0x38);
}
