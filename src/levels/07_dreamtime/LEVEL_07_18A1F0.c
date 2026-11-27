/* LEVEL_07:0x18A1F0 -- placement copy of LEVEL_02_1930A0.c: message handler: when the object is not already in state 2 and the context's linked kind byte is 9 or 1 (or there is no context), switches it to state 2, kicks the helper and reports 3; otherwise reports 1. */
typedef struct Obj {
    char pad_00[0x45];
    unsigned char state;
} Obj;

typedef struct Link {
    char pad_00[0x3F];
    unsigned char kind;
} Link;

typedef struct Ctx {
    char pad_00[0x40];
    Link *link;
} Ctx;

extern void func_07ECC0(Obj *o, float t, unsigned idx);

int func_18A1F0(Obj *o, int a1, int a2, int a3, int a4, Ctx *ctx)
{
    unsigned char kind;

    if (o->state != 2) {
        if (ctx != 0) {
            kind = ctx->link->kind;
            if (kind != 9 && kind != 1)
                return 1;
        }
        o->state = 2;
        func_07ECC0(o, 0.0f, 1);
        return 3;
    }
    return 1;
}
