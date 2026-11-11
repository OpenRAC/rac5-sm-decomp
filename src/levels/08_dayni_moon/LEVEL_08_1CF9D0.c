/* LEVEL_08:0x1CF9D0 -- placement copy of LEVEL_01_19C6E0.c: calls a test helper and, when it passes, a follow-up helper. */
extern char D_002843D0[];
extern int func_1CF930(void *, void *);
extern void func_1CF4D8(void *, void *);

int func_1CF9D0(void *record)
{
    if (func_1CF930(record, D_002843D0) != 0) {
        func_1CF4D8(record, D_002843D0);
        return 1;
    }
    return 0;
}
