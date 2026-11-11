/* LEVEL_07:0x1AF4C0 -- placement copy of LEVEL_01_19C6E0.c: calls a test helper and, when it passes, a follow-up helper. */
extern char D_0024AA40[];
extern int func_1AF420(void *, void *);
extern void func_1AEFC8(void *, void *);

int func_1AF4C0(void *record)
{
    if (func_1AF420(record, D_0024AA40) != 0) {
        func_1AEFC8(record, D_0024AA40);
        return 1;
    }
    return 0;
}
