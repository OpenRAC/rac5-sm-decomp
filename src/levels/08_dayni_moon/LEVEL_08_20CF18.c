/* LEVEL_08:0x20CF18 -- placement copy of LEVEL_04_1E5348.c: fires two shots in random directions around the object axis, each with its own flag word and one word of the shot record. */
typedef struct { int xw; float y; int zw; } Shot;

extern int rand(void);
extern float cosf(float x);
extern float sqrtf(float x);
extern unsigned int D_002E7138;
extern void func_0A49C8(int arg, char *at, unsigned int flags, int word, float y1, float y2, float s, float c);

static __inline__ float Rnd(float lo, float range)
{
    return (float)rand() * 4.656613e-10f * range + lo;
}

void func_20CF18(char *obj, int arg, Shot *shot)
{
    unsigned int hi;
    unsigned int fa;
    unsigned int fb;
    float ang;
    float c;
    float s;
    float y;
    int w;
    char *at;
    float ang2;
    float c2;
    float s2;

    at = obj + 0x20;
    hi = D_002E7138 << 16;
    fa = hi | 0x78001045;
    fb = hi | 0x80001045;
    ang = Rnd(-3.1415927f, 6.2831855f);
    y = shot->y;
    w = shot->xw;
    c = cosf(ang);
    s = sqrtf(1.0f - c * c);
    if (ang < 0.0f)
        s = -s;
    func_0A49C8(arg, at, fa, w, y, y, s, c);
    ang2 = Rnd(-3.1415927f, 6.2831855f);
    y = shot->y;
    w = shot->zw;
    c2 = cosf(ang2);
    s2 = sqrtf(1.0f - c2 * c2);
    if (ang2 < 0.0f)
        s2 = -s2;
    func_0A49C8(arg, at, fb, w, y, y, s2, c2);
}
