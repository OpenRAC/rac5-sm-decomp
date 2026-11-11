/* LEVEL_23:0x12D248 -- placement copy of LEVEL_01_13BB00.c: runs the four-step update for an object when its counter is set. */

extern void func_117758(void *dst, void *src, int flag);
extern void func_1149B0(void *dst, int value);
extern void func_118C20(void *dst, void *src, void *ctx);
extern void func_119060(void *a, void *b, void *c);

void func_12D248(char *a0)
{
    char *obj;
    char *fld;
    char a[0x30];
    char b[0x30];

    obj = *(char **)(a0 + 0x58);
    if (*(int *)(obj + 0x74)) {
        fld = obj + 0x78;
        func_117758(a, fld, 0);
        func_1149B0(fld, *(int *)(obj + 0x74));
        func_118C20(b, a, fld);
        func_119060(a0, a0, b);
    }
}
