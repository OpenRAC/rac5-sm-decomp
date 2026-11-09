/* LEVEL_02:0x0259F8 -- placement copy of LEVEL_01_025098.c: copies a word from one callee's result record into another's. */
extern int func_024F88(int first, int second);
extern char *func_024FD0(int first, int second);

void func_0259F8(int first, int second)
{
    int *destination = (int *)func_024F88(first, second);
    char *source = func_024FD0(first, second);
    destination[0x10] = *(int *)(source + 0x38);
}
