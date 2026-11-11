/* LEVEL_08:0x1821E0 -- placement copy of LEVEL_04_1769F0.c: updates an object's target and dispatches on the target's type tag. */
struct Tgt {
    char pad0[0x40];
    int *type;
};

struct Info {
    char pad0[0x14];
    void *a14;
    float *range;
};

struct Ctrl {
    struct Tgt *cur;
    char pad0[0xB0];
    char sub[0xA8];
    struct Tgt *target;
};

struct Obj {
    char pad0[0x54];
    int *list;
    struct Ctrl *ctrl;
};

extern struct Info *func_183058(struct Obj *o);
extern void func_0368F0(struct Obj *o);
extern void func_1FA760(int a, struct Obj *o, float *buf, void *t);
extern void func_182F10(void *sub, struct Obj *o, float *buf, void *a, void *b);
extern int func_0378B0(struct Obj *o, struct Tgt *t, float *c, float x, float y);
extern void func_182108(struct Obj *o, int mode);

void func_1821E0(struct Obj *o)
{
    float buf[4];
    struct Ctrl *c = o->ctrl;
    int *list = o->list;
    struct Info *info = func_183058(o);
    int first = *list;

    func_0368F0(o);
    func_1FA760(first, o, buf, (char *)c->target + 0x30);
    func_182F10(c->sub, o, buf, info->a14, 0);
    if ((unsigned char)func_0378B0(o, c->target, 0, info->range[0], info->range[1])) {
        c->cur = c->target;
        if (c->target->type[9] == 0xAE8C7B5D)
            func_182108(o, 2);
        else
            func_182108(o, 1);
    }
}
