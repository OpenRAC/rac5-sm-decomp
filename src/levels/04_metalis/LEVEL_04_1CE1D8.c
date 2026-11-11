/* LEVEL_04:0x1CE1D8 -- placement copy of LEVEL_01_1BB318.c: chooses the next state of an object and returns it. */
struct Info {
    char pad[0x60];
    unsigned char f60;
    char pad61;
    unsigned char f62;
};
struct Env {
    char pad[0x2C];
    int f2C;
};
struct Obj {
    char pad[0x45];
    unsigned char state;
    char pad46[0x0E];
    struct Env *env;
    struct Info *info;
};
extern void func_080188(struct Obj *o, int a, int b, int c, float f, float g);
extern int func_1CE8C8(struct Obj *o);
extern void func_1CDCA0(struct Obj *o, int s);
extern int func_030C50(struct Env *e, struct Obj *o, int a, int b, float f, float g, int c);

int func_1CE1D8(struct Obj *o)
{
    struct Info *info = o->info;
    struct Env *env = o->env;
    int st = o->state;
    int r;
    if (info->f62) {
        o->state = 0xC;
        func_080188(o, 1, 0, 1, 0.125f, 0.0f);
        return 0xC;
    }
    if (func_1CE8C8(o)) {
        func_1CDCA0(o, 0x18);
        return 0x18;
    }
    r = func_030C50(env, o, env->f2C, info->f60, 0.10000000149011612f, 2.0f, 0);
    if (r == 2) {
        st = 0x13;
        func_1CDCA0(o, 0x13);
    } else if (r == 1) {
        st = 0x14;
        func_1CDCA0(o, 0x14);
    } else if (r == 0) {
        st = 0x11;
        func_1CDCA0(o, 0x11);
    }
    return st;
}
