/* LEVEL_05:0x198FC0 -- placement copy of LEVEL_01_19C6E0.c: calls a test helper and, when it passes, a follow-up helper. */
extern char D_00220E40[];
extern int func_198F20(void *, void *);
extern void func_198AC8(void *, void *);

int func_198FC0(void *record)
{
    if (func_198F20(record, D_00220E40) != 0) {
        func_198AC8(record, D_00220E40);
        return 1;
    }
    return 0;
}
