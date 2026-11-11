/* LEVEL_06:0x1922B8 -- placement copy of LEVEL_01_19C6E0.c: calls a test helper and, when it passes, a follow-up helper. */
extern char D_00221EC0[];
extern int func_1915A0(void *, void *);
extern void func_191BC8(void *, void *);

int func_1922B8(void *record)
{
    if (func_1915A0(record, D_00221EC0) != 0) {
        func_191BC8(record, D_00221EC0);
        return 1;
    }
    return 0;
}
