/* LEVEL_04:0x1C6568 -- switches an object's link between active and idle: when activating it builds a flag word from the object's template and, if the probe succeeds, registers the link in the matching table; otherwise it unlinks the node. */

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
    struct Node1C6568 *next_00;
    char pad_04[0x0B];
    unsigned char b_0F;
    int w_10;
    struct Node1C6568 *prev_14;
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
    struct Pair1C6568 *p_54;
    struct Node1C6568 *p_58;
    char pad_5C[0x08];
    union Word1C6568 u_64;
};
struct Ent1C6568 {
    char pad_00[0x68];
};

extern struct Ent1C6568 D_00249EF8[];

int func_0851A0(float *a, float *b, int c);
void func_098668(struct Ent1C6568 *e, struct Node1C6568 *n, float *a, float *b, int bits);

void func_1C6568(struct Obj1C6568 *o, int flag)
{
    struct Pair1C6568 *pr;
    struct Node1C6568 *s;
    struct Node1C6568 *prev;
    struct Node1C6568 *next;
    struct Rec1C6568 *rec;
    int fl;
    int bits;
    float buf0[4];
    float buf1[4];
    float dx;
    float dz;
    int n;

    pr = o->p_54;
    s = o->p_58;
    pr->w_04 = pr->w_00;
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
        if (func_0851A0(buf0, buf1, s->w_10)) {
            dx = buf1[0] - buf0[0];
            dz = buf1[2] - buf0[2];
            if (dx > 8.0f || dz > 8.0f) {
                n = 1;
            } else {
                n = 0;
            }
            s->b_0F = n;
            func_098668(&D_00249EF8[n], s, buf0, buf1, bits);
        }
    } else {
        prev = s->prev_14;
        if (prev) {
            prev->next_00 = s->next_00;
            next = s->next_00;
            if (next) {
                next->prev_14 = s->prev_14;
            }
            s->prev_14 = 0;
        }
    }
}
