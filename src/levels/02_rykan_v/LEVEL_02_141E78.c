/* LEVEL_02:0x141E78 -- placement copy of LEVEL_01_13BB00.c: runs the four-step update for an object when its counter is set. */

extern void func_12CC80(void *dst, void *src, int flag);
extern void func_129ED0(void *dst, int value);
extern void func_12E230(void *dst, void *src, void *ctx);
extern void func_12E670(void *a, void *b, void *c);

void func_141E78(char *a0)
{
    char *obj;
    char *fld;
    char a[0x30];
    char b[0x30];

    obj = *(char **)(a0 + 0x58);
    if (*(int *)(obj + 0x74)) {
        fld = obj + 0x78;
        func_12CC80(a, fld, 0);
        func_129ED0(fld, *(int *)(obj + 0x74));
        func_12E230(b, a, fld);
        func_12E670(a0, a0, b);
    }
}
