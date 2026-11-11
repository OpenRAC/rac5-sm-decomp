/* LEVEL_04:0x1769F0 -- updates an object's target and dispatches on the target's type tag. */
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

extern struct Info *func_177868(struct Obj *o);
extern void func_033678(struct Obj *o);
extern void func_1D57E0(int a, struct Obj *o, float *buf, void *t);
extern void func_177720(void *sub, struct Obj *o, float *buf, void *a, void *b);
extern int func_034638(struct Obj *o, struct Tgt *t, float *c, float x, float y);
extern void func_176918(struct Obj *o, int mode);

void func_1769F0(struct Obj *o)
{
    float buf[4];
    struct Ctrl *c = o->ctrl;
    int *list = o->list;
    struct Info *info = func_177868(o);
    int first = *list;

    func_033678(o);
    func_1D57E0(first, o, buf, (char *)c->target + 0x30);
    func_177720(c->sub, o, buf, info->a14, 0);
    if ((unsigned char)func_034638(o, c->target, 0, info->range[0], info->range[1])) {
        c->cur = c->target;
        if (c->target->type[9] == 0xAE8C7B5D)
            func_176918(o, 2);
        else
            func_176918(o, 1);
    }
}
