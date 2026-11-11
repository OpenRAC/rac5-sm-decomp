/* LEVEL_08:0x1CED60 -- placement copy of LEVEL_01_19C6E0.c: calls a test helper and, when it passes, a follow-up helper. */
extern char D_002843D0[];
extern int func_1CE048(void *, void *);
extern void func_1CE670(void *, void *);

int func_1CED60(void *record)
{
    if (func_1CE048(record, D_002843D0) != 0) {
        func_1CE670(record, D_002843D0);
        return 1;
    }
    return 0;
}
