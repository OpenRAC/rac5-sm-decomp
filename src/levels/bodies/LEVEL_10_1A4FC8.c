/* LEVEL_10:0x1A4FC8 -- placement copy of LEVEL_01_19C6E0.c: calls a test helper and, when it passes, a follow-up helper. */
extern char D_0023E540[];
extern int func_1A4F28(void *, void *);
extern void func_1A4AD0(void *, void *);

int func_1A4FC8(void *record)
{
    if (func_1A4F28(record, D_0023E540) != 0) {
        func_1A4AD0(record, D_0023E540);
        return 1;
    }
    return 0;
}
