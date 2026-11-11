/* LEVEL_17:0x14E970 -- follows a two-level pointer, optionally checks a helper result, then runs a follow-up helper and reports success. */

extern int func_037C08(char *a0);
extern void func_14EC40(char *a0, char *a1);

int func_14E970(char *a0)
{
    char *p;

    p = *(char **)(*(char **)(a0 + 0x58));
    if (p == 0) {
        return 0;
    }
    if (*(int *)(p + 0xF4) == 0 || func_037C08(p) != 0) {
        func_14EC40(a0, p);
        return 1;
    }
    return 0;
}
