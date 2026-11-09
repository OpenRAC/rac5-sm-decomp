/* LEVEL_04:0x147F10 -- placement copy of LEVEL_01_13BB00.c: runs the four-step update for an object when its counter is set. */

extern void func_132BC0(void *dst, void *src, int flag);
extern void func_12FA10(void *dst, int value);
extern void func_134170(void *dst, void *src, void *ctx);
extern void func_1345B0(void *a, void *b, void *c);

void func_147F10(char *a0)
{
    char *obj;
    char *fld;
    char a[0x30];
    char b[0x30];

    obj = *(char **)(a0 + 0x58);
    if (*(int *)(obj + 0x74)) {
        fld = obj + 0x78;
        func_132BC0(a, fld, 0);
        func_12FA10(fld, *(int *)(obj + 0x74));
        func_134170(b, a, fld);
        func_1345B0(a0, a0, b);
    }
}
