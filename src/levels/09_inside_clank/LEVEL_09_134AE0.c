/* LEVEL_09:0x134AE0 -- placement copy of LEVEL_01_13BB00.c: runs the four-step update for an object when its counter is set. */

extern void func_11F950(void *dst, void *src, int flag);
extern void func_11D030(void *dst, int value);
extern void func_120F00(void *dst, void *src, void *ctx);
extern void func_121340(void *a, void *b, void *c);

void func_134AE0(char *a0)
{
    char *obj;
    char *fld;
    char a[0x30];
    char b[0x30];

    obj = *(char **)(a0 + 0x58);
    if (*(int *)(obj + 0x74)) {
        fld = obj + 0x78;
        func_11F950(a, fld, 0);
        func_11D030(fld, *(int *)(obj + 0x74));
        func_120F00(b, a, fld);
        func_121340(a0, a0, b);
    }
}
