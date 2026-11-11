/* LEVEL_03:0x1B0420 -- placement copy of LEVEL_01_19C6E0.c: calls a test helper and, when it passes, a follow-up helper. */
extern char D_0024FFC0[];
extern int func_1B0380(void *, void *);
extern void func_1AFF28(void *, void *);

int func_1B0420(void *record)
{
    if (func_1B0380(record, D_0024FFC0) != 0) {
        func_1AFF28(record, D_0024FFC0);
        return 1;
    }
    return 0;
}
