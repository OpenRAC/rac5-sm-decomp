/* LEVEL_23:0x0DE400 -- placement copy of LEVEL_01_0EA6F0.c: fills one record of an effect block with three vectors, a colour and the sine/cosine of a wrapped angle. */
extern float cosf(float x);
extern float floorf(float x);
extern float sqrtf(float x);

typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Rec {
    Vec3 a;
    Vec3 b;
    Vec3 c;
    unsigned int color;
    float f28;
    float sn;
    float cs;
    float f34;
    int w38;
    float f3C;
    float f40;
    int w44;
    unsigned char alpha;
} Rec;

extern Rec *func_08CFE0(int *out, int handle, int flag);

void func_0DE400(float w, float hi, float lo, float angle, int handle, Vec3 *a, Vec3 *b, unsigned int color, Vec3 *c)
{
    int out[4];
    Rec *r;
    float t;
    float wrapped;
    float cs;
    float sn;

    r = func_08CFE0(out, handle, 1);
    if (out[0] != 0) {
        r->a = *a;
        r->b = *b;
        r->c = *c;
        r->f40 = lo;
        r->f34 = hi;
        r->f28 = w;
        r->color = color;
        r->w44 = 0;
        r->w38 = 0;
        r->alpha = color >> 24;
        r->f3C = 0.033333335f / (hi - lo);
        t = floorf(angle * 0.15915494f + 0.5f);
        wrapped = angle - t * 6.2831855f;
        cs = cosf(wrapped);
        sn = sqrtf(1.0f - cs * cs);
        if (wrapped < 0.0f) {
            sn = -sn;
        }
        r->sn = sn;
        r->cs = cs;
    }
}
