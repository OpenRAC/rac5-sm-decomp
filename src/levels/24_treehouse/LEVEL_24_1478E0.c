/* LEVEL_24:0x1478E0 -- placement copy of LEVEL_01_151390.c: converts a position and radius to clamped grid cell bounds. */
struct Grid {
    char pad00[0x1CA0];
    int width;
    int height;
    char pad1CA8[4];
    float originX;
    char pad1CB0[4];
    float originZ;
};

extern struct Grid D_0035DA28;

static __inline__ int Clamp(int v, int max)
{
    v = v < max ? v : max;
    if (v < 0)
        v = 0;
    return v;
}

void func_1478E0(int *out, float *pos, float r)
{
    float x;
    float z;

    x = pos[0] - D_0035DA28.originX;
    out[0] = Clamp((int)((x - r) * 0.0625f), D_0035DA28.width - 1);
    out[2] = Clamp((int)((x + r) * 0.0625f), D_0035DA28.width - 1);
    z = pos[2] - D_0035DA28.originZ;
    out[1] = Clamp((int)((z - r) * 0.0625f), D_0035DA28.height - 1);
    out[3] = Clamp((int)((z + r) * 0.0625f), D_0035DA28.height - 1);
}
