/* LEVEL_05:0x137468 -- placement copy of LEVEL_01_13BB00.c: runs the four-step update for an object when its counter is set. */

extern void func_122330(void *dst, void *src, int flag);
extern void func_11F8B8(void *dst, int value);
extern void func_1238E0(void *dst, void *src, void *ctx);
extern void func_123D20(void *a, void *b, void *c);

void func_137468(char *a0)
{
    char *obj;
    char *fld;
    char a[0x30];
    char b[0x30];

    obj = *(char **)(a0 + 0x58);
    if (*(int *)(obj + 0x74)) {
        fld = obj + 0x78;
        func_122330(a, fld, 0);
        func_11F8B8(fld, *(int *)(obj + 0x74));
        func_1238E0(b, a, fld);
        func_123D20(a0, a0, b);
    }
}
