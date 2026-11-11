/* LEVEL_24:0x1315E0 -- placement copy of LEVEL_01_13BB00.c: runs the four-step update for an object when its counter is set. */

extern void func_11C4B8(void *dst, void *src, int flag);
extern void func_119B00(void *dst, int value);
extern void func_11DA68(void *dst, void *src, void *ctx);
extern void func_11DEA8(void *a, void *b, void *c);

void func_1315E0(char *a0)
{
    char *obj;
    char *fld;
    char a[0x30];
    char b[0x30];

    obj = *(char **)(a0 + 0x58);
    if (*(int *)(obj + 0x74)) {
        fld = obj + 0x78;
        func_11C4B8(a, fld, 0);
        func_119B00(fld, *(int *)(obj + 0x74));
        func_11DA68(b, a, fld);
        func_11DEA8(a0, a0, b);
    }
}
