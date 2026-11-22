/* LEVEL_19:0x176558 -- placement copy of LEVEL_01_1B4170.c: queries a list of entries and fires the handler for the first entry accepted by the filter. */

struct Rec1B4170 {
    char pad0[0x24];
};

struct Ctx1B4170 {
    char *obj;
    char pad4[4];
    int w8;
};

extern struct Rec1B4170 D_001D84E8[];

extern int func_022868(int mode, int field);
extern int func_0367E0(int obj);
extern unsigned int func_046EA8(int obj, int kind, int *list, int a, int b, int c, int d, struct Rec1B4170 *rec, float range);
extern int func_177920(int a, int b);
extern void func_1761F8(char *self, int b);

void func_176558(char *self, int a, int b)
{
    int list[16];
    struct Ctx1B4170 *ctx;
    unsigned int n;
    unsigned int i;
    int *p;
    int idx;
    int v;

    ctx = *(struct Ctx1B4170 **)(self + 0x58);
    idx = (unsigned int)func_022868(12, *(int *)(ctx->obj + 0xF8)) >= 2;
    v = func_0367E0((int)ctx->obj);
    n = func_046EA8((int)ctx->obj, 15, list, b, v, a, 0, &D_001D84E8[idx], 10.0f);
    p = list;
    for (i = 0; i < n; i++) {
        if (func_177920(ctx->w8, *p)) {
            func_1761F8(self, *p);
            return;
        }
        p++;
    }
}
