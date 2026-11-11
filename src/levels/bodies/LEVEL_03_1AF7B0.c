/* LEVEL_03:0x1AF7B0 -- placement copy of LEVEL_01_19C6E0.c: calls a test helper and, when it passes, a follow-up helper. */
extern char D_0024FFC0[];
extern int func_1AEA98(void *, void *);
extern void func_1AF0C0(void *, void *);

int func_1AF7B0(void *record)
{
    if (func_1AEA98(record, D_0024FFC0) != 0) {
        func_1AF0C0(record, D_0024FFC0);
        return 1;
    }
    return 0;
}
