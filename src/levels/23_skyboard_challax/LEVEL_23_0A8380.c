/* LEVEL_23:0x0A8380 -- placement copy of LEVEL_03_0B1388.c: appends one float triple and two floats to three parallel tables, then bumps the counter. */
typedef struct V3 {
    float x;
    float y;
    float z;
} V3;

extern int D_001CF584;
extern V3 D_002F8D60[];
extern float D_002F8D88[];
extern float D_002F8D98[];

static inline void copy3(float *dst, float *src)
{
    *dst++ = *src++;
    *dst++ = *src++;
    *dst = *src;
}

void func_0A8380(float *v, float f, float g)
{
    int i;

    copy3(&D_002F8D60[D_001CF584].x, v);
    i = D_001CF584;
    D_002F8D88[i] = f;
    D_002F8D98[i] = g;
    D_001CF584 = i + 1;
}
