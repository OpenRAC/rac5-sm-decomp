/* LEVEL_19:0x1598C0 -- initialises the object's attached node (kind 2, owner link, two copies of the object matrix, position copy, cleared flags) and starts its first state; returns -1 when the pre-check fails, else 1. */
typedef struct Obj Obj;

typedef struct {
    int w0;
    char pad4[0xE - 4];
    unsigned char kind;
    char padF;
    Obj *owner;
    int link;
} Sub;

typedef struct {
    float m[16];
} Mat;

typedef struct {
    char pad0[0x2C];
    Sub sub;
    char pad18[0x44 - 0x2C - sizeof(Sub)];
    Mat mat0;
    Mat mat1;
    char pad_c4[0xD4 - 0xC4];
    float pos[3];
    char padE0[0xE8 - 0xE0];
    int w_E8;
    char padEC[0];
    unsigned char bEC;
    unsigned char bED;
} Node;

struct Obj {
    float m[16];
    char pad40[0x45 - 0x40];
    unsigned char b45;
    char pad46[0x58 - 0x46];
    Node *node;
    char pad5C[0x77 - 0x5C];
    unsigned char b77;
};

extern void *func_1135A8(void);
extern void func_15A578(Obj *o, int state, int arg);

static __inline__ void CopyMat(float *d, float *s)
{
    d[8] = s[8];
    d[9] = s[9];
    d[10] = s[10];
    d[11] = s[11];
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
    d[4] = s[4];
    d[5] = s[5];
    d[6] = s[6];
    d[7] = s[7];
    d[12] = s[12];
    d[13] = s[13];
    d[14] = s[14];
    d[15] = s[15];
}

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

int func_1598C0(Obj *o)
{
    Node *n;
    Sub *sub;
    int st;

    if (func_1135A8() != 0) {
        return -1;
    }
    n = o->node;
    sub = &n->sub;
    sub->kind = 2;
    sub->owner = o;
    sub->link = 0;
    n->sub.w0 = 0;
    CopyMat(n->mat0.m, o->m);
    CopyMat(n->mat1.m, o->m);
    n->w_E8 = -1;
    Copy3(n->pos, &o->m[12]);
    n->bEC = 0;
    n->bED = 0;
    st = o->b45;
    o->b45 = 0;
    func_15A578(o, st == 0 ? 3 : st, 1);
    o->b77 = 0x40;
    return 1;
}
