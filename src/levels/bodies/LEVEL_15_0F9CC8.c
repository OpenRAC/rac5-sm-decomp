/* LEVEL_15:0x0F9CC8 -- fills a freshly obtained record from a source object and its owner; a second body pushes a node onto a global list. */

struct Mat43 {
    float m[9];
    float t[3];
};

struct Shot {
    char pad_00[0x0C];
    struct Mat43 mat_0C;
    float f_3C;
    char pad_40[0x4C - 0x40];
    float f_4C;
};

struct Shooter {
    char pad_00[0xE4];
    float f_E4;
    int w_E8;
};

struct Rec {
    struct Mat43 mat_00;
    float v_30[3];
    struct Shot *p_3C;
    float f_40;
    float f_44;
    float f_48;
    int w_4C;
    void *p_50;
};

struct Probe {
    int w_00;
    char pad_04[0xC];
};

struct Glob {
    float v_00[3];
    char pad_0C[0x9C - 0x0C];
    float v_9C[3];
};

struct Node {
    char pad_00[0x74];
    struct Node *p_74;
};

extern struct Glob D_002F3D50;
extern struct Node *D_002ECCF0;
extern char D_0016F608[];
extern char D_0016F5E0[];

extern struct Rec *func_080558(struct Probe *pr, struct Shooter *s, int n);

static __inline__ void SubVec(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

void func_0F9CC8(struct Shooter *s, struct Shot *p)
{
    struct Probe pr;
    struct Rec *r;

    r = func_080558(&pr, s, 1);
    if (pr.w_00 == 0) {
        return;
    }
    SubVec(r->v_30, p->mat_0C.t, D_002F3D50.v_00);
    SubVec(r->v_30, r->v_30, D_002F3D50.v_9C);
    r->mat_00 = p->mat_0C;
    r->f_40 = 1.0e30f;
    r->p_3C = p;
    r->f_44 = p->f_3C;
    r->f_48 = s->f_E4 * p->f_4C;
    r->w_4C = s->w_E8;
    r->p_50 = r->w_4C != 0 ? D_0016F608 : D_0016F5E0;
}

void func_0F9E38(struct Node *n)
{
    n->p_74 = D_002ECCF0;
    D_002ECCF0 = n;
}
