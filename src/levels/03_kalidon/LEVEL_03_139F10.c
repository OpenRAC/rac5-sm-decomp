/* LEVEL_03:0x139F10 -- placement copy of LEVEL_01_13BB00.c: runs the four-step update for an object when its counter is set. */

extern void func_124B08(void *dst, void *src, int flag);
extern void func_121EE8(void *dst, int value);
extern void func_1260B8(void *dst, void *src, void *ctx);
extern void func_1264F8(void *a, void *b, void *c);

void func_139F10(char *a0)
{
    char *obj;
    char *fld;
    char a[0x30];
    char b[0x30];

    obj = *(char **)(a0 + 0x58);
    if (*(int *)(obj + 0x74)) {
        fld = obj + 0x78;
        func_124B08(a, fld, 0);
        func_121EE8(fld, *(int *)(obj + 0x74));
        func_1260B8(b, a, fld);
        func_1264F8(a0, a0, b);
    }
}
