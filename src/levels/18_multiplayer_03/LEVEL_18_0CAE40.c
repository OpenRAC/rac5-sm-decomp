/* LEVEL_18:0x0CAE40 -- placement copy of LEVEL_01_0DC828.c: spawns a random number of particles whose directions are drawn from the given angle range. */

struct Range_0DC828 {
    int lo;
    int hi;
    float a_lo;
    float a_hi;
};

extern int rand(void);
extern float cosf(float x);
extern float sinf(float x);
extern void func_0CAFB0(void *a0, float *a1, struct Range_0DC828 *a2, void *a3);

static __inline__ float RandRange(float lo, float hi)
{
    float range = hi - lo;

    return lo + range * ((float)rand() * (1.0f / 2147483648.0f));
}

void func_0CAE40(void *obj, struct Range_0DC828 *r, void *c)
{
    float dir[4];
    float theta;
    float c1;
    float phi;
    int lo;
    int range;
    int t;
    int n;
    int i;

    lo = r->lo;
    range = r->hi - lo;
    t = range != 0 ? rand() % range : 0;
    n = lo + t;
    for (i = 0; i < n; i++) {
        theta = RandRange(r->a_lo, r->a_hi);
        phi = RandRange(0.0f, 6.2831855f);
        c1 = cosf(theta);
        dir[0] = c1 * cosf(phi);
        dir[1] = sinf(theta);
        dir[2] = c1 * sinf(phi);
        dir[3] = 0.0f;
        func_0CAFB0(obj, dir, r, c);
    }
}
