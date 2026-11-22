/* USA LEVEL_06.REL:0x183E20, 324-byte candidate (21 November 2026).
 * Measured pinned: 20 differing words; first difference at 0xA8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Rec { char pad[0x24]; unsigned magic; char pad2[0x1C]; };
struct L {
    char pad[0x34];
    struct Rec *arr;
    unsigned n;
};
typedef struct State {
    int a;
    float dist;
    int b;
} State;
typedef struct Obj {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x54 - 0x3C];
    State *state;
} Obj;

extern struct L *D_001F5990;
extern float sqrtf(float x);
extern Obj *func_076150(struct Rec *e, int a, int b, int c);

static __inline__ void Sub3(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

static inline struct Rec *find(unsigned magic)
{
    unsigned i;

    for (i = 0; i < D_001F5990->n; i++) {
        if (D_001F5990->arr[i].magic == magic) {
            return &D_001F5990->arr[i];
        }
    }
    return 0;
}

Obj *func_183E20(int p0, int a, int b, float *pt)
{
    struct Rec *e;
    Obj *o;
    State *s;
    float d[3];

    e = find(0x7E9AAB1D);
    if (e == 0) {
        o = 0;
    } else {
        o = func_076150(e, 0, p0, 0xFF);
    }
    if (o != 0) {
        s = o->state;
        s->a = a;
        Sub3(d, o->pos, pt);
        s->dist = sqrtf(d[0] * d[0] + d[1] * d[1] + d[2] * d[2]);
        s->b = b;
    }
    return o;
}
