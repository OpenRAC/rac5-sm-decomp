/* USA LEVEL_03.REL:0x1794D8, 320-byte candidate (21 November 2026).
 * Measured pinned: 28 differing words; first difference at 0xC8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad_00[0x14];
    float a_14;
    float b_18;
    float c_1C;
    float d_20;
    float e_24;
    float f_28;
    char pad_2C[0xC];
    char vec_38[1];
} State;

typedef struct {
    char pad_00[0x58];
    State *state_58;
} Obj;

extern float D_003B0DA8;
extern char D_00179330[];
extern char D_00220330[];

extern int func_0809D8(unsigned int first, unsigned int second, unsigned int third);
extern void func_1E35C0(char *a, char *b, char *c);

static __inline__ float *Clamp(float *v, float *lo, float *hi)
{
    if (*v < *lo) {
        return lo;
    }
    if (*hi < *v) {
        return hi;
    }
    return v;
}

void func_1794D8(Obj *o)
{
    State *s;
    float v0;
    float lo0;
    float hi0;
    float v1;
    float lo1;
    float hi1;
    float d;
    float b;
    float t;

    s = o->state_58;
    func_0809D8((unsigned int)o, (unsigned int)D_00179330, 1);
    v0 = s->a_14 + s->b_18;
    lo0 = 0.0f;
    hi0 = 1.0f;
    s->a_14 = *Clamp(&v0, &lo0, &hi0);
    v1 = s->e_24 + s->f_28;
    lo1 = 0.0f;
    hi1 = 1.0f;
    s->e_24 = *Clamp(&v1, &lo1, &hi1);
    d = s->c_1C - s->e_24;
    b = (s->d_20 + d * 0.6666667f) * D_003B0DA8;
    t = b + d * D_003B0DA8;
    s->c_1C = t + s->e_24;
    s->d_20 = b - t * 0.6666667f;
    func_1E35C0((char *)s + 0x38, (char *)s + 0x60, D_00220330);
}
