/* LEVEL_04:0x1D6AE0 -- tests whether a point is within a radius of an object and returns the normalized offset. */
typedef struct { char pad[0x60]; float r; } R;
typedef struct { char pad[0x30]; float x; char pad34[4]; float z; char pad3C[0x18]; R *rp; } A;
typedef struct { char pad[0x30]; float x; char pad34[4]; float z; } B;
typedef struct { char pad[0x14]; float r; } C;
extern float sqrtf(float x);

int func_1D6AE0(A *a, float *excess, float *out, B *b, C *c)
{
    float dx, dz, d2, r, d, inv;
    R *rp = a->rp;

    dx = a->x - b->x;
    out[0] = dx;
    dz = a->z - b->z;
    out[1] = dz;
    d2 = dx * dx + dz * dz;
    r = rp->r - c->r;
    if (r * r < d2) {
        d = sqrtf(d2);
        inv = 1.0f / d;
        out[0] = out[0] * inv;
        out[1] = out[1] * inv;
        *excess = d - r;
        return 1;
    }
    return 0;
}
