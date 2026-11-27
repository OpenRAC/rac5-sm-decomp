/* LEVEL_24:0x060F58 -- placement copy of LEVEL_01_067908.c: probes the ground below an object position; stores the height above it and the hit normal, and returns 0 when the ground is within reach. */
typedef struct {
    char pad[0x30];
    float pos[3];
} Obj;
extern float D_001FB604;
extern int func_01E7C0(float h, float *res, float *q, float *p, int a, int b);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

int func_060F58(Obj *o, float *outY, float *outV)
{
    float p[3];
    float q[8];
    float r[4];

    Copy3(p, o->pos);
    p[1] = p[1] + 0.75f;
    if ((unsigned char)func_01E7C0(p[1] - D_001FB604, r, q, p, 0x78, 0) == 0)
        return 1;
    *outY = p[1] - r[0];
    Copy3(outV, q);
    if (r[0] - 0.75f < 0.4f)
        return 0;
    return 1;
}
