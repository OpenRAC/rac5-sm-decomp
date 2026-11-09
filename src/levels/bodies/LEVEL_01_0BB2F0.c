/* LEVEL_01:0x0BB2F0 -- when the guard word is set, runs a helper and mirrors its result into a global. */
extern char D_00328A64[];
extern void func_0BCBA0(void *, int *);
extern void func_0BCA80(int);

int func_0BB2F0(void)
{
    char *base;
    int result;

    base = D_00328A64;
    if (*(int *)(base + 0x20) != 0) {
        func_0BCBA0(base, &result);
        *(int *)(base - 4) = result;
        func_0BCA80(result);
        return result;
    }
    return 0;
}
