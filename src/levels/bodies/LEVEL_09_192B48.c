/* LEVEL_09:0x192B48 -- placement copy of LEVEL_01_19C6E0.c: calls a test helper and, when it passes, a follow-up helper. */
extern char D_0021C8C0[];
extern int func_192AA8(void *, void *);
extern void func_192650(void *, void *);

int func_192B48(void *record)
{
    if (func_192AA8(record, D_0021C8C0) != 0) {
        func_192650(record, D_0021C8C0);
        return 1;
    }
    return 0;
}
