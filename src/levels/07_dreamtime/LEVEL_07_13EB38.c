/* LEVEL_07:0x13EB38 -- placement copy of LEVEL_01_13BB00.c: runs the four-step update for an object when its counter is set. */

extern void func_129928(void *dst, void *src, int flag);
extern void func_126F70(void *dst, int value);
extern void func_12AED8(void *dst, void *src, void *ctx);
extern void func_12B318(void *a, void *b, void *c);

void func_13EB38(char *a0)
{
    char *obj;
    char *fld;
    char a[0x30];
    char b[0x30];

    obj = *(char **)(a0 + 0x58);
    if (*(int *)(obj + 0x74)) {
        fld = obj + 0x78;
        func_129928(a, fld, 0);
        func_126F70(fld, *(int *)(obj + 0x74));
        func_12AED8(b, a, fld);
        func_12B318(a0, a0, b);
    }
}
