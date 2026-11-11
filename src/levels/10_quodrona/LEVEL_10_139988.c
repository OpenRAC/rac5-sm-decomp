/* LEVEL_10:0x139988 -- placement copy of LEVEL_01_13BB00.c: runs the four-step update for an object when its counter is set. */

extern void func_1247A0(void *dst, void *src, int flag);
extern void func_121E58(void *dst, int value);
extern void func_125D50(void *dst, void *src, void *ctx);
extern void func_126190(void *a, void *b, void *c);

void func_139988(char *a0)
{
    char *obj;
    char *fld;
    char a[0x30];
    char b[0x30];

    obj = *(char **)(a0 + 0x58);
    if (*(int *)(obj + 0x74)) {
        fld = obj + 0x78;
        func_1247A0(a, fld, 0);
        func_121E58(fld, *(int *)(obj + 0x74));
        func_125D50(b, a, fld);
        func_126190(a0, a0, b);
    }
}
