/* USA LEVEL_16.REL:0x02EF00, 412-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad: 1 differing words; first difference at 0x7C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad0[0x30];
    float x;
    char pad34[4];
    float z;
} Src_t;

typedef struct {
    Src_t *src;
    float *pos;
    char pad8[0x10];
    unsigned char flags;
    char pad19[3];
} Ent_t;

typedef struct {
    char pad0[0x58];
    Ent_t *ents;
} Obj_t;

typedef struct {
    char pad00[0x20];
    float x20;
    char pad24[4];
    float x28;
    char pad2C[4];
    float x30;
    char pad34[4];
    float x38;
} Actor;

extern float sqrtf(float x);
extern int func_14ABB0(Obj_t *o, int i);
extern int func_1258A0();

unsigned char func_02EF00(float cosmin, float range, float *out, Actor *a, Obj_t *o, unsigned char idx, int mode, float *p)
{
    float d[2];
    float len;
    float inv;
    int ahead;
    unsigned int st;

    d[0] = p[0] - a->x30;
    d[1] = p[2] - a->x38;
    len = sqrtf(d[0] * d[0] + d[1] * d[1]);
    inv = 1.0f / len;
    d[0] = d[0] * inv;
    d[1] = d[1] * inv;
    ahead = d[0] * a->x20 + d[1] * a->x28 >= cosmin;
    st = 2;
    if (o != 0) {
        if (mode == 0) {
            st = func_14ABB0(o, idx);
        } else {
            st = func_1258A0(o, idx);
        }
        if (st < 2) {
            return 0;
        }
        if (!ahead) {
            return 0;
        }
    } else {
        out[0] = p[0];
        out[1] = p[2];
    }
    if (len <= range && ahead) {
        return 2;
    }
    return st != 2;
}
