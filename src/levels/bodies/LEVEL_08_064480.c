/* LEVEL_08:0x064480 -- placement copy of LEVEL_01_05ECE8.c: probes the ground below an object and classifies the surface. */
typedef struct { float x, y, z, w; } V3;
typedef struct { float n[3]; unsigned short flags; char pad[0x12]; } Hit;
typedef struct { char pad0[0x30]; float x, y, z; } O;
extern float D_0027E984;
extern int func_020EE8(V3 *a, Hit *b, V3 *c, int d, int e, float f);

static inline void copy3(V3 *out, float *in)
{
    out->x = in[0];
    out->y = in[1];
    out->z = in[2];
}

int func_064480(O *o, float *out1, float *out2, float eps)
{
    V3 pos;
    Hit hit;
    V3 res;
    float d;

    copy3(&pos, &o->x);
    pos.y += 0.75f;
    if ((unsigned char)func_020EE8(&res, &hit, &pos, 0x78, 0, pos.y - D_0027E984)) {
        d = res.x - 0.75f;
        if (out1)
            *out1 = pos.y - res.x;
        if (out2) {
            out2[0] = hit.n[0];
            out2[1] = hit.n[1];
            out2[2] = hit.n[2];
        }
        if (d < eps) {
            if (hit.flags & 1)
                return 5;
            return (hit.flags & 4) ? 3 : 0;
        }
    }
    return 1;
}
