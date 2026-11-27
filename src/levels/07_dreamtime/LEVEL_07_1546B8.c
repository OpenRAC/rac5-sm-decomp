/* LEVEL_07:0x1546B8 -- placement copy of LEVEL_01_151390.c: converts a position and radius to clamped grid cell bounds. */
struct Grid {
    char pad00[0x1CA0];
    int width;
    int height;
    char pad1CA8[4];
    float originX;
    char pad1CB0[4];
    float originZ;
};

extern struct Grid D_003A74A8;

static __inline__ int Clamp(int v, int max)
{
    v = v < max ? v : max;
    if (v < 0)
        v = 0;
    return v;
}

void func_1546B8(int *out, float *pos, float r)
{
    float x;
    float z;

    x = pos[0] - D_003A74A8.originX;
    out[0] = Clamp((int)((x - r) * 0.0625f), D_003A74A8.width - 1);
    out[2] = Clamp((int)((x + r) * 0.0625f), D_003A74A8.width - 1);
    z = pos[2] - D_003A74A8.originZ;
    out[1] = Clamp((int)((z - r) * 0.0625f), D_003A74A8.height - 1);
    out[3] = Clamp((int)((z + r) * 0.0625f), D_003A74A8.height - 1);
}
