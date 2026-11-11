/* LEVEL_10:0x15B370 -- placement copy of LEVEL_19_13B398.c: when a helper succeeds, stores three words in a sub-record and calls a second helper. */

extern int func_15B348(char *object);
extern void func_15B3F0(char *a0, int a1);

int func_15B370(char *a0, int a1, int a2, int a3)
{
    char *v;

    if (func_15B348(a0)) {
        v = *(char **)(a0 + 0x58);
        *(int *)(v + 0x64) = a1;
        *(int *)(v + 0x68) = a2;
        *(int *)(v + 0x6C) = a3;
        func_15B3F0(a0, 1);
        return 1;
    }
    return 0;
}
