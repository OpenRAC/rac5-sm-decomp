/* LEVEL_06:0x192EF0 -- placement copy of LEVEL_01_19C6E0.c: calls a test helper and, when it passes, a follow-up helper. */
extern char D_00221EC0[];
extern int func_192E50(void *, void *);
extern void func_1929F8(void *, void *);

int func_192EF0(void *record)
{
    if (func_192E50(record, D_00221EC0) != 0) {
        func_1929F8(record, D_00221EC0);
        return 1;
    }
    return 0;
}
