/* LEVEL_09:0x1B6040 -- placement copy of LEVEL_07_1DC090.c: spawns a particle at a random point on a disc around a transform (wider and raised when the flag is set); returns the new entry or 0. */
extern int rand(void);
extern float cosf(float x);
extern float sinf(float x);
extern float fabsf(float x);

extern char D_001F2C08[];
extern char D_001F2C50[];
extern char D_00201A88[];

extern char *func_06AA88(void);
extern void func_06AAD8(char *h, char *tab, float *pos, float *out, char *params);

static __inline__ float RandRange(float lo, float hi)
{
    float d = hi - lo;

    return lo + d * ((float)rand() * 4.656613e-10f);
}

static __inline__ void Mad3(float *d, float *a, float *b, float k)
{
    d[0] = a[0] + b[0] * k;
    d[1] = a[1] + b[1] * k;
    d[2] = a[2] + b[2] * k;
}

char *func_1B6040(float *m, int unused, float *out, int flag)
{
    char *h;
    char *tab;
    float cs[2];
    float t;
    float ang;
    float sc;
    float yoff;
    float c;
    float s;

    h = func_06AA88();
    if (h != 0) {
        yoff = 0.0f;
        if (flag != 0) {
            tab = D_001F2C08;
            yoff = RandRange(3.0f, 3.5f);
            sc = 2.0f;
        } else {
            sc = 1.0f;
            tab = D_001F2C50;
        }
        t = (float)rand() * 4.656613e-10f;
        ang = (t + t) * 3.1415927f;
        cs[0] = cosf(ang);
        cs[1] = sinf(ang);
        c = cs[0] * sc;
        s = fabsf(cs[1] * sc);
        Mad3(out, &m[12], &m[0], c);
        Mad3(out, out, &m[8], s);
        out[1] = m[13] + yoff;
        func_06AAD8(h, tab, &m[12], out, D_00201A88);
    }
    return h;
}
