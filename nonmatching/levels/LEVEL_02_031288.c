/* USA LEVEL_02.REL:0x031288, 396-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 21 differing words; first difference at 0x3C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float sqrtf(float x);

typedef struct {
    char pad00[8];
    float vx;
    float vz;
} Out;

typedef struct {
    char pad00[0x30];
    float x;
    float y;
    float z;
    float w;
} Actor;

typedef struct {
    char pad00[0xC];
    float k;
} Aux;

typedef struct {
    float x;
    char pad04[4];
    float z;
} Player;

extern int func_0306C0(float amount, char *out, char *actor, float *other, unsigned long flags);
extern char *func_01ACB0(void);
extern void func_013860(Actor *h, float *vx, float *vz, float *target, float *k);

static __inline__ void Copy4(float *d, float *s)
{
    float a = s[0];
    d[0] = a;
    a = s[1];
    d[1] = a;
    a = s[2];
    d[2] = a;
    a = s[3];
    d[3] = a;
}

int func_031288(Out *out, Actor *actor, Aux *other, unsigned long flags)
{
    float p[4];
    float dir[4];
    float *bp = &actor->x;
    Player *pl;
    float dx;
    float dz;
    float d2;
    float inv;
    int r;

    Copy4(p, bp);
    r = func_0306C0(0.2f, (char *)out, (char *)actor, (float *)other, flags);
    if (r == 0) {
        pl = (Player *)func_01ACB0();
        dir[0] = pl->x - actor->x;
        dir[1] = 0.0f;
        dir[2] = pl->z - bp[2];
        d2 = dir[0] * dir[0] + dir[2] * dir[2];
        if (!(d2 < 2.3841858e-7f)) {
            inv = 1.0f / sqrtf(d2);
            dir[0] = inv * dir[0];
            dir[2] = inv * dir[2];
        }
        func_013860(actor, &out->vx, &out->vz, dir, &other->k);
        return 0;
    }
    if (r == 2) {
        dx = p[0] - actor->x;
        dz = p[2] - actor->z;
        if (dx * dx + dz * dz <= 0.09f) {
            return 1;
        }
    }
    return 0;
}
