/* LEVEL_01:0x025098 -- copies a word from one callee's result record into another's. */
extern int func_024628(int first, int second);
extern char *func_024670(int first, int second);

void func_025098(int first, int second)
{
    int *destination = (int *)func_024628(first, second);
    char *source = func_024670(first, second);
    destination[0x10] = *(int *)(source + 0x38);
}
