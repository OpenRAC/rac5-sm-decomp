/* USA LEVEL_16.REL:0x150CF8, 280-byte candidate (21 November 2026).
 * Measured pinned --as: 22 differing words; first difference at 0x38.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad_00[0x20];
    float pos;
    float vel;
} State;

typedef struct {
    char pad_00[0x58];
    State *state;
} Obj;

extern float D_0019AD24;
extern float D_001D3FF8[3];

extern void func_1038F0(float *out, float angle);
extern void func_1040F8(Obj *a, Obj *b, float *m);

static __inline__ int *MinRef(int *a, int *b)
{
    return *a < *b ? a : b;
}

void func_150CF8(Obj *o, float k)
{
    float m[12];
    int n;
    int two;
    int i;
    int steps;
    State *s;
    float *pos;
    float *vel;
    float ka;
    float kb;
    float kc;

    s = o->state;
    func_1038F0(m, s->pos * k);
    func_1040F8(o, o, m);
    n = (int)(D_0019AD24 * 59.998802185058594f);
    two = 2;
    ka = D_001D3FF8[0];
    kb = D_001D3FF8[1];
    kc = D_001D3FF8[2];
    pos = &s->pos;
    vel = &s->vel;
    steps = *MinRef(&n, &two);
    for (i = 0; i < steps; i++) {
        *vel = (4.71238899230957f - *pos) * ka - *vel * kb;
        if (*vel > kc) {
            *vel = kc;
        } else if (*vel < -kc) {
            *vel = -kc;
        }
        *pos = *pos + *vel;
    }
}
