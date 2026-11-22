/* USA LEVEL_03.REL:0x193D68, 292-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 9 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int w0;
} Pool;

typedef struct {
    float x;
    float y;
    float z;
    float fC;
    float f10;
    int w14;
} Fx;

typedef struct {
    char pad00[0x34];
    float h;
} Owner;

extern int rand(void);
extern float cosf(float x);
extern float sqrtf(float x);
extern Fx *func_0973B0(Pool *out, void *o, int a);

void func_193D68(void *o, Owner *owner, float *pos)
{
    Pool pool;
    Fx *fx;
    float a;
    float c;
    float s;
    float twopi;

    fx = func_0973B0(&pool, o, 1);
    if (pool.w0 != 0) {
        twopi = 6.2831854820251465f;
        fx->w14 = (int)owner;
        a = (float)rand() * 4.656612873077393e-10f * twopi + -3.1415927410125732f;
        c = cosf(a);
        s = sqrtf(1.0f - c * c);
        if (a < 0.0f)
            s = -s;
        fx->fC = s;
        fx->f10 = c;
        fx->x = pos[0];
        fx->z = pos[2];
        fx->y = owner->h;
    }
}
