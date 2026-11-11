/* LEVEL_23:0x18FED8 -- placement copy of LEVEL_22_1332B0.c: spawns one randomised particle at a position: random size, spin and height jitter with a random sign, then hands it to the particle emitter. */
typedef struct V3 {
    float x;
    float y;
    float z;
} V3;

extern int rand(void);

extern void func_0D2058(int type, int owner, float size, float life, float c, float d, float spin, V3 *pos, unsigned int mask, int colour, int a0, int i6, int i7);

static __inline__ float RandF(float scale, float bias)
{
    return (float)rand() * 4.6566129e-10f * scale + bias;
}

static __inline__ float RandS(float scale)
{
    return (float)rand() * 4.6566129e-10f * scale;
}

static __inline__ float Signed(float j, float bias, int n)
{
    return (j + bias) * ((float)(rand() % n) * 2.0f + -1.0f);
}

void func_18FED8(int a0, int a1, V3 *src)
{
    V3 p;
    float size;
    float spin;
    float life;

    size = RandF(0.04666667f, 0.033333335f);
    spin = RandF(1.5707964f, 0.0f);
    life = RandF(0.2f, 0.05f);
    p.x = src->x;
    p.y = src->y;
    p.z = src->z;
    p.y = p.y + Signed(RandS(0.09f), 0.01f, 2);
    func_0D2058(1, a1, size, life, 0.75f, 0.0f, spin, &p, 0xFFFFFFFF, 0xFFFFFF, a0, 1, 0xF);
}
