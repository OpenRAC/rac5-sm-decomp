/* LEVEL_08:0x173C98 -- placement copy of LEVEL_19_13B398.c: when a helper succeeds, stores three words in a sub-record and calls a second helper. */

extern int func_173C70(char *object);
extern void func_173D18(char *a0, int a1);

int func_173C98(char *a0, int a1, int a2, int a3)
{
    char *v;

    if (func_173C70(a0)) {
        v = *(char **)(a0 + 0x58);
        *(int *)(v + 0x64) = a1;
        *(int *)(v + 0x68) = a2;
        *(int *)(v + 0x6C) = a3;
        func_173D18(a0, 1);
        return 1;
    }
    return 0;
}
