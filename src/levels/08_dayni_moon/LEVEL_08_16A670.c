/* LEVEL_08:0x16A670 -- placement copy of LEVEL_05_152088.c: state handler: starts up, runs the active state's checks and then probes the linked targets. */
struct Tgt {
    char pad_00[0x30];
};
struct Info {
    struct Tgt *t_00;
    struct Tgt *t_04;
    char pad_08[4];
    struct Tgt *t_0c;
    char pad_10[4];
    struct Tgt *t_14;
    char pad_18[0x1F - 0x18];
    unsigned char b_1f;
    char pad_20[6];
    unsigned char b_26;
    char pad_27;
    unsigned char b_28;
};
struct Obj {
    char pad_00[0x45];
    unsigned char state;
    char pad_46[0x54 - 0x46];
    struct Info *info;
};

extern struct Tgt *D_0028496C;
extern int func_16A800(struct Obj *o);
extern void func_16A7E8(struct Obj *o);
extern int func_08FFD8(int a);
extern int func_0173C8(char *p, char *q, int a, float f);
extern int func_08C780(struct Tgt *a, char *p);
extern void func_0845F8(struct Obj *o, int x);

void func_16A670(struct Obj *o)
{
    struct Info *s;

    s = o->info;
    if (o->state == 0) {
        if (s->t_04 == 0) {
            s->t_04 = D_0028496C;
        }
        o->state = 1;
    }
    if (o->state == 1) {
        if (func_16A800(o)) {
            func_16A7E8(o);
        }
    } else if (o->state == 2) {
        if (s->b_1f != 0) {
            if (func_16A800(o) == 0) {
                o->state = 3;
                return;
            }
        }
        if (s->b_26 != 0) {
            if (func_08FFD8(2) & 0x300) {
                o->state = 3;
            }
        }
        if (func_0173C8((char *)s->t_00 + 0x30, (char *)s + 0x18, 0, 30.0f)) {
            o->state = 3;
        }
    } else if (o->state == 3) {
        if (s->b_28 != 0) {
            func_0845F8(o, 1);
            return;
        }
        if (s->t_14 != 0) {
            if (func_08C780(s->t_14, (char *)s->t_04 + 0x30)) {
                o->state = 1;
            }
        }
    }
    if (s->t_0c != 0) {
        if (func_08C780(s->t_0c, (char *)s->t_04 + 0x30)) {
            func_0845F8(o, 1);
        }
    }
}
