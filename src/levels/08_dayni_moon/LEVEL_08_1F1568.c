/* LEVEL_08:0x1F1568 -- placement copy of LEVEL_04_1C83E8.c: switches an object between active and idle: when activating it builds the option word from the object's template and, if the probe succeeds, registers the link with the near or far entry; otherwise it unlinks the node. */

struct Rec1C83E8 {
    char pad_00[0x0C];
    int w_0C;
    int w_10;
    int w_14;
    char pad_18[0x1C];
};
struct Tmpl1C83E8 {
    char pad_00[0x04];
    struct Rec1C83E8 *recs_04;
    char pad_08[0x37];
    unsigned char b_3F;
};
struct Node1C83E8 {
    struct Node1C83E8 *next_00;
    char pad_04[0x0B];
    unsigned char b_0F;
    int w_10;
    struct Node1C83E8 *prev_14;
};
struct Bits1C83E8 {
    unsigned int pad_0 : 3;
    unsigned int b3 : 1;
    unsigned int b4 : 1;
    unsigned int b5 : 1;
    unsigned int pad_6 : 26;
};
union Word1C83E8 {
    int w;
    struct Bits1C83E8 f;
};
struct Obj1C83E8 {
    char pad_00[0x40];
    struct Tmpl1C83E8 *p_40;
    unsigned char b_44;
    char pad_45[0x0F];
    void *p_54;
    struct Node1C83E8 *p_58;
    char pad_5C[0x08];
    union Word1C83E8 u_64;
};
struct Ent1C83E8 {
    char pad_00[0x68];
};

extern struct Ent1C83E8 D_0027E978[];

int func_089D30(float *a, float *b, int c);
void func_09D490(struct Ent1C83E8 *e, struct Node1C83E8 *n, float *a, float *b, int bits);

void func_1F1568(struct Obj1C83E8 *o, int flag)
{
    struct Node1C83E8 *s;
    struct Node1C83E8 *prev;
    struct Node1C83E8 *next;
    struct Rec1C83E8 *rec;
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
        if (rec->w_0C != 0) {
            bits = (fl & 0x1420) | 0x81;
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
        if (func_089D30(buf0, buf1, s->w_10)) {
            dx = buf1[0] - buf0[0];
            dz = buf1[2] - buf0[2];
            if (dx > 8.0f || dz > 8.0f) {
                n = 1;
            } else {
                n = 0;
            }
            s->b_0F = n;
            func_09D490(&D_0027E978[n], s, buf0, buf1, bits);
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
