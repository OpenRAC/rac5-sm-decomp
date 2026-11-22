/* USA LEVEL_02.REL:0x18B090, 852-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad -fno-gcse: 24 differing words; first difference
 * at 0xF4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float sqrtf(float x);

typedef struct Node Node;
struct Node {
    Node *next;
    char pad4[0xB];
    unsigned char flag;
    int owner;
    Node *prev;
    char pad18[0x18];
    float pos;
    float vel;
};

typedef struct {
    float k0;
    float k1;
    float limit;
} Tune;

typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    int w10;
    int w14;
    char pad18[0x1C];
} Slot;

typedef struct {
    char pad0[4];
    Slot *slots;
    char pad8[0x38];
    unsigned char kindBits;
} Shape;

typedef struct {
    char pad0[0x30];
    float pos[3];
    char pad3c[4];
    Shape *shape;
    char pad44[0];
    unsigned char slot;
    char pad45[0x1F];
    unsigned int flags;
} Obj;

typedef struct {
    int w0;
} Cfg;

extern float D_00203F1C;
extern char D_00238738[];
extern char D_0022CE08[];
typedef struct {
    char pad_00[0x68];
} Entry;

extern Entry D_00246BF8[];
extern void func_015A20(float *p, float *q, int w, float *c, int b, int z, float x, float y);
extern void func_0141B0(void *o, void *a, float *dir, char *t, char *u);
extern int func_088610(float *a, float *b, int c);
extern void func_09BC40(Entry *t, void *st, float *a, float *b, unsigned int flags);

static __inline__ int *MinP(int *a, int *b)
{
    return (*a < *b) ? a : b;
}

static __inline__ void Spring(float *pos, float *vel, float target, float k0, float k1, float limit, int steps)
{
    float acc;

    if (steps > 0) {
        do {
            acc = (target - *pos) * k0 - *vel * k1;
            *vel = acc;
            if (limit < acc) {
                *vel = limit;
            } else if (acc < -limit) {
                *vel = -limit;
            }
            steps--;
            *pos = *pos + *vel;
        } while (steps != 0);
    }
}

static __inline__ void Unlink(Node *n)
{
    Node *p = n->prev;

    if (p != 0) {
        p->next = n->next;
        if (n->next != 0) {
            n->next->prev = n->prev;
        }
        n->prev = 0;
    }
}

static __inline__ int isFar(float *a, float *b)
{
    float dx = b[0] - a[0];
    float dz = b[2] - a[2];

    if (dx > 8.0f || dz > 8.0f) {
        return 1;
    }
    return 0;
}

void func_18B090(Obj *o, Tune *tune, float target)
{
    Cfg *cfg;
    Node *st;
    float d[4];
    float a[4];
    float b[4];
    float len, k;
    float *p;
    float *q;
    float *c;
    unsigned char kb;
    unsigned int fl, fl2, m, alt;
    int n, two, far;
    Slot *s;

    two = 2;
    n = (int)(D_00203F1C * 59.998802f);
    st = *(Node **)((char *)o + 0x58);
    cfg = *(Cfg **)((char *)o + 0x54);
    Spring(&((float *)st)[0xC], &((float *)st)[0xD], target, tune->k0, tune->k1, tune->limit, *MinP(&n, &two));
    p = o->pos;
    q = (float *)((char *)st + 0x18);
    c = (float *)((char *)st + 0x40);
    kb = ((unsigned char *)st)[0x41];
    func_015A20(p, q, cfg->w0, c, kb, 0, ((float *)st)[0xC], 1.2f);
    d[3] = 1.0f;
    d[0] = q[0] - p[0];
    d[1] = q[1] - p[1];
    d[2] = q[2] - p[2];
    len = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
    if (!(len < 2.384185791015625e-07f)) {
        k = 1.0f / sqrtf(len);
        d[0] *= k;
        d[1] *= k;
        d[2] *= k;
    }
    func_0141B0(o, (char *)st + 0x24, d, D_00238738, D_0022CE08);
    s = &o->shape->slots[o->slot];
    m = o->flags & 0x1420;
    alt = m | 1;
    fl = m | 0x81;
    if (s->wC == 0) {
        fl = alt;
    }
    if (s->w10 != 0) {
        fl |= 0x100;
    }
    if (s->w14 != 0) {
        fl |= 0x200;
    }
    if (*(unsigned char *)((char *)o->shape + 0x3F) == 1) {
        fl |= 0x800;
    }
    if ((o->flags >> 3) & 1) {
        fl |= 0x400;
    }
    fl2 = fl | 0x10;
    if (func_088610(a, b, ((int *)st)[4])) {
        far = isFar(a, b);
        Unlink(st);
        st->flag = far;
        func_09BC40(&D_00246BF8[far], st, a, b, fl2);
    } else {
        Unlink(st);
    }
}
