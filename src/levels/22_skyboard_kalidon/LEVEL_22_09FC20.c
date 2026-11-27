/* LEVEL_22:0x09FC20 -- placement copy of LEVEL_03_0B1388.c: appends one float triple and two floats to three parallel tables, then bumps the counter. */
typedef struct V3 {
    float x;
    float y;
    float z;
} V3;

extern int D_0015B504;
extern V3 D_0027D4E0[];
extern float D_0027D508[];
extern float D_0027D518[];

static inline void copy3(float *dst, float *src)
{
    *dst++ = *src++;
    *dst++ = *src++;
    *dst = *src;
}

void func_09FC20(float *v, float f, float g)
{
    int i;

    copy3(&D_0027D4E0[D_0015B504].x, v);
    i = D_0015B504;
    D_0027D508[i] = f;
    D_0027D518[i] = g;
    D_0015B504 = i + 1;
}
