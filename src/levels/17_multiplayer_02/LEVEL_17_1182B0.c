/* LEVEL_17:0x1182B0 -- placement copy of LEVEL_16_118938.c: projects a world offset into a screen rectangle (clamped in length) and submits that rectangle. */
typedef struct {
    float v[3];
} Vec3;

typedef struct {
    float m[3][4];
} Mat3;

typedef struct Dir {
    Vec3 xyz;
    float w;
} Dir;

typedef struct Rect {
    int x0;
    int y0;
    int x1;
    int y1;
} Rect;

extern Mat3 D_002D11A0;
extern int func_096208(int *value);
extern int func_096238(char *record);
extern int func_096268(int *param_1);
extern int func_096320(int *range);
extern void func_1039C8(Vec3 *out, Mat3 *a, Vec3 *b);
extern void func_09B108(int index, void *rect, int color);
extern float sqrtf(float x);
extern void *memset(void *p, int c, unsigned n);

void func_1182B0(float *p, float *q, int a, int b, int w, int h, int *handle)
{
    Dir d;
    Rect r;
    int cx, cy;
    float inv;
    int x, y;

    cx = func_096208(handle);
    cy = func_096238((char *)handle);
    {
        float sx = (float)func_096268(handle);
        float sy;
        float tx;
        float ty;

        sx *= 0.5f;
        sx -= (float)w;
        sy = (float)func_096320(handle) * 0.5f - (float)h;

        d.xyz.v[1] = 0;
        d.xyz.v[0] = q[0] - p[0];
        d.xyz.v[2] = q[2] - p[1];
        tx = sx / 33.299999237060547f;
        ty = sy / 33.299999237060547f;
        func_1039C8(&d.xyz, &D_002D11A0, &d.xyz);
        if (d.xyz.v[0] * d.xyz.v[0] + d.xyz.v[2] * d.xyz.v[2] > 1108.889892578125f) {
            inv = 33.299999237060547f / sqrtf(d.xyz.v[0] * d.xyz.v[0] + d.xyz.v[2] * d.xyz.v[2]);
            d.xyz.v[0] = d.xyz.v[0] * inv;
            d.xyz.v[2] = d.xyz.v[2] * inv;
        }
        x = (int)(d.xyz.v[0] * tx + (float)cx);
        y = (int)(d.xyz.v[2] * ty + (float)cy);
    }
    memset(&r, 0, 0x10);
    r.x0 = x - w;
    r.y0 = y - h;
    r.x1 = x + w;
    r.y1 = y + h;
    func_09B108(a, &r, b);
}
