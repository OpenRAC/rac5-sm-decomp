/* LEVEL_03:0x0B1388 -- appends one float triple and two floats to three parallel tables, then bumps the counter. */
typedef struct V3 {
    float x;
    float y;
    float z;
} V3;

extern int D_00214804;
extern V3 D_003427A0[];
extern float D_003427C8[];
extern float D_003427D8[];

static inline void copy3(float *dst, float *src)
{
    *dst++ = *src++;
    *dst++ = *src++;
    *dst = *src;
}

void func_0B1388(float *v, float f, float g)
{
    int i;

    copy3(&D_003427A0[D_00214804].x, v);
    i = D_00214804;
    D_003427C8[i] = f;
    D_003427D8[i] = g;
    D_00214804 = i + 1;
}
