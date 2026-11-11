/* LEVEL_01:0x1BB318 -- chooses the next state of an object and returns it. */
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
extern void func_07CD28(struct Obj *o, int a, int b, int c, float f, float g);
extern int func_1BBA08(struct Obj *o);
extern void func_1BADE0(struct Obj *o, int s);
extern int func_0311D0(struct Env *e, struct Obj *o, int a, int b, float f, float g, int c);

int func_1BB318(struct Obj *o)
{
    struct Info *info = o->info;
    struct Env *env = o->env;
    int st = o->state;
    int r;
    if (info->f62) {
        o->state = 0xC;
        func_07CD28(o, 1, 0, 1, 0.125f, 0.0f);
        return 0xC;
    }
    if (func_1BBA08(o)) {
        func_1BADE0(o, 0x18);
        return 0x18;
    }
    r = func_0311D0(env, o, env->f2C, info->f60, 0.10000000149011612f, 2.0f, 0);
    if (r == 2) {
        st = 0x13;
        func_1BADE0(o, 0x13);
    } else if (r == 1) {
        st = 0x14;
        func_1BADE0(o, 0x14);
    } else if (r == 0) {
        st = 0x11;
        func_1BADE0(o, 0x11);
    }
    return st;
}
