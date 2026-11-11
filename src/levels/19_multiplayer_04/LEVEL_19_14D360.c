/* LEVEL_19:0x14D360 -- placement copy of LEVEL_16_150488.c: when two linked actors are within 6 units (squared distance under 36), runs a follow-up helper. */

typedef struct Actor150488 {
    unsigned char pad_00[0x30];
    float x_30;
    float y_34;
    float z_38;
} Actor150488;

typedef struct Holder150488 {
    Actor150488 *p_00;
    Actor150488 *p_04;
} Holder150488;

typedef struct Obj150488 {
    unsigned char pad_00[0x54];
    Holder150488 *f_54;
    Holder150488 *f_58;
} Obj150488;

extern void func_14D3F8(Obj150488 *o);

int func_14D360(Obj150488 *o) {
    Actor150488 *a;
    Actor150488 *b;
    float *pa;
    float *pb;
    float dx;
    float dy;
    float dz;

    a = o->f_58->p_00;
    if (a == 0) {
        return 0;
    }
    pa = &a->x_30;
    b = o->f_54->p_04;
    pb = &b->x_30;
    dx = pb[0] - pa[0];
    dy = pb[1] - pa[1];
    dz = pb[2] - pa[2];
    if (dx * dx + dy * dy + dz * dz < 36.0f) {
        func_14D3F8(o);
        return 1;
    }
    return 0;
}
