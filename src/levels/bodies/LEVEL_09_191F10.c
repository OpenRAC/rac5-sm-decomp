/* LEVEL_09:0x191F10 -- placement copy of LEVEL_01_19C6E0.c: calls a test helper and, when it passes, a follow-up helper. */
extern char D_0021C8C0[];
extern int func_1911F8(void *, void *);
extern void func_191820(void *, void *);

int func_191F10(void *record)
{
    if (func_1911F8(record, D_0021C8C0) != 0) {
        func_191820(record, D_0021C8C0);
        return 1;
    }
    return 0;
}
