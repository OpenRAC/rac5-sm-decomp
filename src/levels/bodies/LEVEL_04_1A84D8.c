/* LEVEL_04:0x1A84D8 -- placement copy of LEVEL_01_19C6E0.c: calls a test helper and, when it passes, a follow-up helper. */
extern char D_0024F950[];
extern int func_1A77C0(void *, void *);
extern void func_1A7DE8(void *, void *);

int func_1A84D8(void *record)
{
    if (func_1A77C0(record, D_0024F950) != 0) {
        func_1A7DE8(record, D_0024F950);
        return 1;
    }
    return 0;
}
