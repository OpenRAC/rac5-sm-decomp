/* LEVEL_10:0x1A9270 -- steers an actor toward its goal and reports whether the move was accepted. */

struct Pt1A9270 {
    float x_00;
    float z_04;
};
struct Cfg1A9270 {
    char pad_00[0x7E];
    unsigned char b_7E;
};
struct Obj1A9270 {
    char pad_00[0x30];
    float pos_30[3];
    char pad_3C[0x18];
    struct Pt1A9270 *pt_54;
    struct Cfg1A9270 *cfg_58;
    char pad_5C[0x14];
    float f_70;
};

int func_016500(float *pos);
void func_0165F8(struct Pt1A9270 *p, float *pos, float a, float b);
int func_030C98(struct Pt1A9270 *p, float *v, int k, float f);

int func_1A9270(struct Obj1A9270 *o)
{
    float v[4];
    struct Pt1A9270 *p;
    struct Cfg1A9270 *c;

    p = o->pt_54;
    c = o->cfg_58;
    if (func_016500(o->pos_30) != 0) {
        o->f_70 = 3.0f;
        return 0;
    }
    if (0.0f <= o->f_70) {
        return 0;
    }
    if (c->b_7E != 0) {
        func_0165F8(p, o->pos_30, 3.0f, 4.5f);
    } else {
        func_0165F8(p, o->pos_30, 5.0f, 15.0f);
    }
    v[0] = p->x_00;
    v[2] = p->z_04;
    v[1] = o->pos_30[1];
    v[3] = 1.0f;
    if (func_030C98(p, v, 0, 0.75f) == 0) {
        if (c->b_7E != 0) {
            func_0165F8(p, o->pos_30, 3.0f, 3.0f);
        } else {
            func_0165F8(p, o->pos_30, 3.0f, 4.5f);
        }
    }
    return 1;
}
