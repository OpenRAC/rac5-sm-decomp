/* LEVEL_05:0x198388 -- placement copy of LEVEL_01_19C6E0.c: calls a test helper and, when it passes, a follow-up helper. */
extern char D_00220E40[];
extern int func_197670(void *, void *);
extern void func_197C98(void *, void *);

int func_198388(void *record)
{
    if (func_197670(record, D_00220E40) != 0) {
        func_197C98(record, D_00220E40);
        return 1;
    }
    return 0;
}
