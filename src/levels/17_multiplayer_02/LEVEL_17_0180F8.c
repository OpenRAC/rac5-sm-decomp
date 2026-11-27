/* LEVEL_17:0x0180F8 -- placement copy of LEVEL_01_01A398.c: copies a four-float vector, a 4x4 matrix and a second four-float vector from the shared blocks into the cached record and clears its last two words. */
typedef struct {
    float v[4];
    float m[16];
    float t[4];
    int z[2];
} Cache;

extern float D_001C01B8[4];
extern float D_001C0100[16];
extern float D_001C01E8[4];
extern Cache D_001CFB60;

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

static __inline__ void Copy16(float *d, float *s)
{
    d[8] = s[8];
    d[9] = s[9];
    d[10] = s[10];
    d[11] = s[11];
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
    d[4] = s[4];
    d[5] = s[5];
    d[6] = s[6];
    d[7] = s[7];
    d[12] = s[12];
    d[13] = s[13];
    d[14] = s[14];
    d[15] = s[15];
}

void func_0180F8(void)
{
    Copy4(D_001CFB60.v, D_001C01B8);
    Copy16(D_001CFB60.m, D_001C0100);
    Copy4(D_001CFB60.t, D_001C01E8);
    D_001CFB60.z[0] = 0;
    D_001CFB60.z[1] = 0;
}
