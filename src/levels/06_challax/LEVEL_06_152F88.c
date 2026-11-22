/* LEVEL_06:0x152F88 -- placement copy of LEVEL_01_162878.c: consumes one use of the owner's linked entry, sets the effect parameters, plays the hit and returns to state 8. */
struct Ent {
    char pad0[0xF8];
    int id;
};

struct Uses {
    char pad[0x40];
    int count;
};

struct Fx {
    struct Ent *ent;
    int mode;
};

struct Owner {
    char pad0[0x45];
    unsigned char state;
    char pad1[0x12];
    struct Fx *fx;
    char pad2[0x14];
    float f70;
};

extern const int D_00209670;
extern unsigned char D_0021DCB0[];
extern int func_022D30(int a, int b);
extern void func_076908(struct Owner *o, int a, int b, int c, float d, float e);

void func_152F88(struct Owner *o)
{
    struct Fx *p;
    struct Ent *g;
    int r;

    p = o->fx;
    g = p->ent;
    r = func_022D30(9, g->id);
    ((struct Uses *)r)->count -= 1;
    o->f70 = 45.00089645385742f;
    p->mode = 3;
    func_076908(o, 3, 0, 1, 0.10000000149011612f, 0.0f);
    o->state = 8;
    if (D_00209670 == 7 && (unsigned int)(D_0021DCB0[0xD] - 1) < 0x3F) {
        D_0021DCB0[0xD] = 0x80;
    } else if (D_00209670 == 9 && (unsigned int)(D_0021DCB0[0xD] - 1) < 0x3F) {
        D_0021DCB0[0xD] = 0x80;
    }
}
