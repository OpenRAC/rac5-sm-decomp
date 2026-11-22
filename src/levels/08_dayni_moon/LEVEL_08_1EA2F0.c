/* LEVEL_08:0x1EA2F0 -- placement copy of LEVEL_01_1B4170.c: queries a list of entries and fires the handler for the first entry accepted by the filter. */

struct Rec1B4170 {
    char pad0[0x24];
};

struct Ctx1B4170 {
    char *obj;
    char pad4[4];
    int w8;
};

extern struct Rec1B4170 D_00275588[];

extern int func_025B58(int mode, int field);
extern int func_040568(int obj);
extern unsigned int func_0513E8(int obj, int kind, int *list, int a, int b, int c, int d, struct Rec1B4170 *rec, float range);
extern int func_1EB600(int a, int b);
extern void func_1E9F90(char *self, int b);

void func_1EA2F0(char *self, int a, int b)
{
    int list[16];
    struct Ctx1B4170 *ctx;
    unsigned int n;
    unsigned int i;
    int *p;
    int idx;
    int v;

    ctx = *(struct Ctx1B4170 **)(self + 0x58);
    idx = (unsigned int)func_025B58(12, *(int *)(ctx->obj + 0xF8)) >= 2;
    v = func_040568((int)ctx->obj);
    n = func_0513E8((int)ctx->obj, 15, list, b, v, a, 0, &D_00275588[idx], 10.0f);
    p = list;
    for (i = 0; i < n; i++) {
        if (func_1EB600(ctx->w8, *p)) {
            func_1E9F90(self, *p);
            return;
        }
        p++;
    }
}
