/* LEVEL_06:0x1321F8 -- placement copy of LEVEL_01_13BB00.c: runs the four-step update for an object when its counter is set. */

extern void func_11CD98(void *dst, void *src, int flag);
extern void func_11A210(void *dst, int value);
extern void func_11E348(void *dst, void *src, void *ctx);
extern void func_11E788(void *a, void *b, void *c);

void func_1321F8(char *a0)
{
    char *obj;
    char *fld;
    char a[0x30];
    char b[0x30];

    obj = *(char **)(a0 + 0x58);
    if (*(int *)(obj + 0x74)) {
        fld = obj + 0x78;
        func_11CD98(a, fld, 0);
        func_11A210(fld, *(int *)(obj + 0x74));
        func_11E348(b, a, fld);
        func_11E788(a0, a0, b);
    }
}
