/* LEVEL_10:0x1AA100 -- on first use spawns a marker above the target, then picks the next state. */
struct Vec3 {
    float x, y, z;
};
struct Target {
    char pad[0x30];
    struct Vec3 pos;
};
struct Ctx {
    char pad[0x40];
    struct Target *target;
};
struct Aux {
    char pad[0x6C];
    void *h;
};
struct Obj {
    char pad[0x46];
    unsigned char started;
    char pad47[0xD];
    struct Ctx *ctx;
    struct Aux *aux;
};
extern float func_07D0C0(void *a0);
extern void func_145CD8(void *a, void *b, struct Vec3 *p);
extern int func_07D0E8(struct Obj *o, int a);
extern int func_1E2ED0(struct Obj *o);
extern int func_1A93C0(struct Obj *o);
extern void func_1A8E40(struct Obj *o, int s);
extern int func_1AA360(struct Obj *o);

void func_1AA100(struct Obj *o)
{
    struct Ctx *ctx = o->ctx;
    struct Aux *aux = o->aux;
    if (o->started == 0) {
        if (func_07D0C0(o) >= 0.26666668f) {
            struct Vec3 *pos = &ctx->target->pos;
            struct Vec3 v;
            v.x = pos->x;
            v.y = pos->y;
            v.z = pos->z;
            v.y += 0.6f;
            func_145CD8(aux->h, o, &v);
            o->started = 1;
        }
    }
    if (func_07D0E8(o, 0)) {
        if (func_1E2ED0(o)) {
            func_1A8E40(o, func_1A93C0(o));
        } else if (func_1AA360(o)) {
            func_1A8E40(o, 0x17);
        } else {
            func_1A8E40(o, 0x15);
        }
    }
}
