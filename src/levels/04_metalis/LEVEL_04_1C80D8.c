/* LEVEL_04:0x1C80D8 -- switches an object's link between active and idle: when activating it builds a flag word from the object's template and, if the probe succeeds, registers the node in the matching table; otherwise it releases the node's pool handle. */

struct Rec1C6568 {
    char pad_00[0x0C];
    int w_0C;
    int w_10;
    int w_14;
    char pad_18[0x1C];
};
struct Tmpl1C6568 {
    char pad_00[0x04];
    struct Rec1C6568 *recs_04;
    char pad_08[0x37];
    unsigned char b_3F;
};
struct Pair1C6568 {
    int w_00;
    int w_04;
};
struct Node1C6568 {
    unsigned short h_00;
    char pad_02;
    unsigned char b_03;
    int w_04;
};
struct Bits1C6568 {
    unsigned int pad_0 : 3;
    unsigned int b3 : 1;
    unsigned int b4 : 1;
    unsigned int b5 : 1;
    unsigned int pad_6 : 26;
};
union Word1C6568 {
    int w;
    struct Bits1C6568 f;
};
struct Obj1C6568 {
    char pad_00[0x40];
    struct Tmpl1C6568 *p_40;
    unsigned char b_44;
    char pad_45[0x0F];
    char pad_54[4];
    struct Node1C6568 *p_58;
    char pad_5C[0x08];
    union Word1C6568 u_64;
};
struct Ent1C6568 {
    char pad_00[0x68];
};

extern struct Ent1C6568 D_00249EF8[];

int func_0851A0(float *a, float *b, int c);
void func_098368(struct Ent1C6568 *e, struct Node1C6568 *n, float *a, float *b, int bits);
void func_098950(struct Ent1C6568 *e, unsigned int h);

static __inline__ void Release(struct Ent1C6568 *e, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_098950(e, *h);
        *h = 0xFFFF;
    }
}

void func_1C80D8(struct Obj1C6568 *o, int flag)
{
    struct Node1C6568 *s;
    struct Rec1C6568 *rec;
    int fl;
    int bits;
    float buf0[4];
    float buf1[4];
    float dx;
    float dz;
    int n;

    s = o->p_58;
    o->u_64.f.b4 = flag ^ 1;
    o->u_64.f.b5 = flag ^ 1;
    fl = o->u_64.w;
    if (flag) {
        rec = &o->p_40->recs_04[o->b_44];
        bits = (fl & 0x1420) | 1;
        if (rec->w_0C) {
            bits |= 0x80;
        }
        if (rec->w_10) {
            bits |= 0x100;
        }
        if (rec->w_14) {
            bits |= 0x200;
        }
        if (o->p_40->b_3F == 1) {
            bits |= 0x800;
        }
        if (o->u_64.f.b3) {
            bits |= 0x400;
        }
        if (func_0851A0(buf0, buf1, s->w_04)) {
            dx = buf1[0] - buf0[0];
            dz = buf1[2] - buf0[2];
            if (dx > 8.0f || dz > 8.0f) {
                n = 1;
            } else {
                n = 0;
            }
            s->b_03 = n;
            func_098368(&D_00249EF8[n], s, buf0, buf1, bits);
        }
    } else {
        Release(&D_00249EF8[s->b_03], &s->h_00);
    }
}
