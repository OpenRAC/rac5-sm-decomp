/* USA LEVEL_15.REL:0x100158, 320-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 2 differing words; first difference at 0x100.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Body {
    char pad00[0x34];
    float mn[3];
    float mx[3];
} Body;

typedef struct Obj {
    float m[12];
} Obj;

typedef struct Vec4 {
    float f[4];
} Vec4;

extern float sqrtf(float x);
extern Body *D_002ED174;
extern int D_002F3E14;
extern int func_0E1A68(float *a0, float *a1, float *a2, float *a3, float *t0, float *t1,
                       float *t2, float *t3, float f12, float f13, float f14);
extern int func_0DB020(float *a0, float *a1, Vec4 *a2, float *a3, float *t0, float f12, float f13,
                       Body *t1, Obj *t2, int t3);

unsigned char func_100158(char *sub, float *p5, float *p6, float f12, float f13)
{
    Obj *o;
    Body *body;
    float *mn;
    float *mx;
    float len2;
    float len;
    Vec4 q;
    float v[4];

    o = (Obj *)(sub - 0x180);
    body = D_002ED174;
    mn = body->mn;
    mx = body->mx;
    len2 = o->m[0] * o->m[0] + o->m[1] * o->m[1] + o->m[2] * o->m[2];
    len = sqrtf(len2);
    if ((unsigned char)func_0E1A68(mn, mx, o->m, o->m + 3, o->m + 6, o->m + 9, p5, p6, f12, len2,
                                   f13 * len) == 0)
        return 0;
    if (func_0DB020(v, v + 1, &q, p5, p6, f12, f13, body, o, D_002F3E14))
        return 1;
    return 0;
}
