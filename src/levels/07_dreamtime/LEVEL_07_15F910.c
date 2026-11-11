/* LEVEL_07:0x15F910 -- placement copy of LEVEL_19_13B398.c: when a helper succeeds, stores three words in a sub-record and calls a second helper. */

extern int func_15F8E8(char *object);
extern void func_15F990(char *a0, int a1);

int func_15F910(char *a0, int a1, int a2, int a3)
{
    char *v;

    if (func_15F8E8(a0)) {
        v = *(char **)(a0 + 0x58);
        *(int *)(v + 0x64) = a1;
        *(int *)(v + 0x68) = a2;
        *(int *)(v + 0x6C) = a3;
        func_15F990(a0, 1);
        return 1;
    }
    return 0;
}
