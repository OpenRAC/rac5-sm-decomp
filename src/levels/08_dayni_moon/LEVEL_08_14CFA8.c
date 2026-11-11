/* LEVEL_08:0x14CFA8 -- placement copy of LEVEL_01_13BB00.c: runs the four-step update for an object when its counter is set. */

extern void func_137C70(void *dst, void *src, int flag);
extern void func_134E80(void *dst, int value);
extern void func_139220(void *dst, void *src, void *ctx);
extern void func_139660(void *a, void *b, void *c);

void func_14CFA8(char *a0)
{
    char *obj;
    char *fld;
    char a[0x30];
    char b[0x30];

    obj = *(char **)(a0 + 0x58);
    if (*(int *)(obj + 0x74)) {
        fld = obj + 0x78;
        func_137C70(a, fld, 0);
        func_134E80(fld, *(int *)(obj + 0x74));
        func_139220(b, a, fld);
        func_139660(a0, a0, b);
    }
}
