/* LEVEL_10:0x1A4358 -- placement copy of LEVEL_01_19C6E0.c: calls a test helper and, when it passes, a follow-up helper. */
extern char D_0023E540[];
extern int func_1A3640(void *, void *);
extern void func_1A3C68(void *, void *);

int func_1A4358(void *record)
{
    if (func_1A3640(record, D_0023E540) != 0) {
        func_1A3C68(record, D_0023E540);
        return 1;
    }
    return 0;
}
