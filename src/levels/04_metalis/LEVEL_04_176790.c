/* LEVEL_04:0x176790 -- helpers for a held-item state: a flag test, the grab/release switch that arms or tears down the held object, and the settle step that hands the held object's state to the placement routine. */

struct Cfg176790 {
    int w_00;
    int w_04;
};
struct Obj176790;
struct State176790 {
    char pad_00[0xB4];
    char x_B4[0x9C];
    struct Obj176790 *p_150;
    char pad_154[0x0C];
    char x_160[0x10];
};
struct Obj176790 {
    char pad_00[0x46];
    unsigned char b_46;
    char pad_47[0x0D];
    struct Cfg176790 *p_54;
    struct State176790 *p_58;
    char pad_5C[0x08];
    unsigned int w_64;
};

void func_1DD140(struct Obj176790 *o, int flag, int mode);
struct Obj176790 *func_17B010(struct Obj176790 *o, int kind);
void func_07FAE8(struct Obj176790 *o, int v);
void func_07FC48(struct Obj176790 *o);
void func_0333E0(struct Obj176790 *o);
void func_0335D8(struct Obj176790 *o);
void func_032EB8(struct Obj176790 *o);
void func_0338E0(struct Obj176790 *o);
void func_032890(char *a, struct Obj176790 *o, struct Obj176790 *p, char *b, int c);

int func_176790(struct Obj176790 *o)
{
    return o->b_46 == 1;
}

void func_1767A0(struct Obj176790 *o, int flag)
{
    struct Cfg176790 *cfg;
    struct State176790 *st;
    struct Obj176790 *held;
    int mode;

    cfg = o->p_54;
    st = o->p_58;
    switch (cfg->w_04) {
    case 0:
        mode = 3;
        break;
    case 1:
        mode = 2;
        break;
    case 2:
        mode = 1;
        break;
    default:
        mode = 0;
        break;
    }
    func_1DD140(o, flag, mode);
    if (flag) {
        o->w_64 |= 0x40000;
        st->p_150 = func_17B010(o, cfg->w_04);
        if (st->p_150 == 0) {
            func_07FAE8(o, 1);
        }
    } else {
        func_0333E0(o);
        func_0335D8(o);
        held = st->p_150;
        func_07FAE8(held, 1);
        if (held->w_64 & 6) {
            func_07FC48(held);
        }
        st->p_150 = 0;
        o->w_64 &= ~0x40000;
    }
}

void func_1768C8(struct Obj176790 *o)
{
    struct State176790 *st;

    st = o->p_58;
    func_032EB8(o);
    func_0338E0(o);
    func_032890(st->x_B4, o, st->p_150, st->x_160, 6);
}
