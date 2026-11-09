/* LEVEL_08:0x0335A0 -- placement copy of LEVEL_02_034038.c. */
/* LEVEL_02:0x34038 -- tracks a position against a reference point and refreshes a cached record when it moved, the mode changed, or the idle count ran out. */

extern void func_033E08(char *rec, int a, int b);

static __inline__ float DistSq(float *p, float *q)
{
    float dx;
    float dz;

    dx = q[0] - p[0];
    dz = q[2] - p[1];
    return dx * dx + dz * dz;
}

static __inline__ void SetXZ(float *p, float *q)
{
    p[0] = q[0];
    p[1] = q[2];
}

void func_0335A0(char *a0, float *a1, unsigned char mode, int a3, int t0)
{
    int moved;

    *(unsigned char *)(a0 + 0x2E) = *(unsigned char *)(a0 + 0x2E) + 1;
    moved = DistSq((float *)(a0 + 8), a1) >= 0.010000001f;
    SetXZ((float *)(a0 + 8), a1);
    if (moved || mode != *(unsigned char *)(a0 + 0x2D) || *(unsigned char *)(a0 + 0x2E) >= 2) {
        *(unsigned char *)(a0 + 0x2E) = 0;
        func_033E08(a0, a3, t0);
    }
    *(unsigned char *)(a0 + 0x2D) = mode;
}
