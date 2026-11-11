/* LEVEL_02:0x1B23D0 -- placement copy of LEVEL_01_19C6E0.c: calls a test helper and, when it passes, a follow-up helper. */
extern char D_0024C650[];
extern int func_1B16B8(void *, void *);
extern void func_1B1CE0(void *, void *);

int func_1B23D0(void *record)
{
    if (func_1B16B8(record, D_0024C650) != 0) {
        func_1B1CE0(record, D_0024C650);
        return 1;
    }
    return 0;
}
