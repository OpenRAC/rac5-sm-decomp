/* LEVEL_06:0x0237A0 -- placement copy of LEVEL_01_025098.c: copies a word from one callee's result record into another's. */
extern int func_022D30(int first, int second);
extern char *func_022D78(int first, int second);

void func_0237A0(int first, int second)
{
    int *destination = (int *)func_022D30(first, second);
    char *source = func_022D78(first, second);
    destination[0x10] = *(int *)(source + 0x38);
}
