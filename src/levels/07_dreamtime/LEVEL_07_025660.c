/* LEVEL_07:0x025660 -- placement copy of LEVEL_01_025098.c: copies a word from one callee's result record into another's. */
extern int func_024BF0(int first, int second);
extern char *func_024C38(int first, int second);

void func_025660(int first, int second)
{
    int *destination = (int *)func_024BF0(first, second);
    char *source = func_024C38(first, second);
    destination[0x10] = *(int *)(source + 0x38);
}
