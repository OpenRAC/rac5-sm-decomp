typedef struct {
    char pad_000[0x54];
    float m[6];
    char pad_06C[0x298 - 0x6C];
    float f298;
    float f29C;
} Obj;

extern Obj *D_00143EBC;

void func_0055B8(float *out, float *v, float s)
{
    Obj *g = D_00143EBC;
    float a = g->f298 * s;
    float b = g->f29C * s;
    float *t = g->m;
    float tx = t[3];
    float vx = v[0];
    float vy = v[1];
    float vz = v[2];
    float ty = t[4];
    float tz = t[5];

    out[0] = a * vx + b * tx;
    out[1] = a * vy + b * ty;
    out[2] = a * vz + b * tz;
}
