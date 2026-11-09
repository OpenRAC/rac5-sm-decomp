/* LEVEL_01:0x13BB00 -- runs the four-step update for an object when its counter is set. */

extern void func_126948(void *dst, void *src, int flag);
extern void func_123BA8(void *dst, int value);
extern void func_127EF8(void *dst, void *src, void *ctx);
extern void func_128338(void *a, void *b, void *c);

void func_13BB00(char *a0)
{
    char *obj;
    char *fld;
    char a[0x30];
    char b[0x30];

    obj = *(char **)(a0 + 0x58);
    if (*(int *)(obj + 0x74)) {
        fld = obj + 0x78;
        func_126948(a, fld, 0);
        func_123BA8(fld, *(int *)(obj + 0x74));
        func_127EF8(b, a, fld);
        func_128338(a0, a0, b);
    }
}
