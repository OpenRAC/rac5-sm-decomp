/* LEVEL_02:0x1B3008 -- placement copy of LEVEL_01_19C6E0.c: calls a test helper and, when it passes, a follow-up helper. */
extern char D_0024C650[];
extern int func_1B2F68(void *, void *);
extern void func_1B2B10(void *, void *);

int func_1B3008(void *record)
{
    if (func_1B2F68(record, D_0024C650) != 0) {
        func_1B2B10(record, D_0024C650);
        return 1;
    }
    return 0;
}
