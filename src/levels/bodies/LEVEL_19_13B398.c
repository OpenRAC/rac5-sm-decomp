/* LEVEL_19:0x13B398 -- when a helper succeeds, stores three words in a sub-record and calls a second helper. */

extern int func_13B370(char *object);
extern void func_13B508(char *a0, int a1);

int func_13B398(char *a0, int a1, int a2, int a3)
{
    char *v;

    if (func_13B370(a0)) {
        v = *(char **)(a0 + 0x58);
        *(int *)(v + 0x64) = a1;
        *(int *)(v + 0x68) = a2;
        *(int *)(v + 0x6C) = a3;
        func_13B508(a0, 1);
        return 1;
    }
    return 0;
}
