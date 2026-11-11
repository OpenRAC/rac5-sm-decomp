/* LEVEL_07:0x1AE850 -- placement copy of LEVEL_01_19C6E0.c: calls a test helper and, when it passes, a follow-up helper. */
extern char D_0024AA40[];
extern int func_1ADB38(void *, void *);
extern void func_1AE160(void *, void *);

int func_1AE850(void *record)
{
    if (func_1ADB38(record, D_0024AA40) != 0) {
        func_1AE160(record, D_0024AA40);
        return 1;
    }
    return 0;
}
