/* LEVEL_23:0x18FD58 -- placement copy of LEVEL_22_133130.c: spawns one randomised particle at the given position: random size, spin, drift and life from the generator, then hands it to the particle emitter. */
typedef struct V3 {
    float x;
    float y;
    float z;
} V3;

extern int rand(void);

extern void func_0D2058(int type, int owner, V3 *pos, float size, float life, float c, float d, float spin, unsigned int mask, unsigned int colour, int a0, int i6, int i7);

static __inline__ float RandF(float scale, float bias)
{
    return (float)rand() * 4.6566129e-10f * scale + bias;
}

void func_18FD58(int a0, int a1, V3 *pos)
{
    float size;
    float spin;
    float d;
    float life;

    size = RandF(0.0066666677594184875f, 0.03333333507180214f);
    spin = RandF(1.5707963705062866f, 0.0f);
    d = RandF(-0.0016666667070239782f, -0.0033333336468786f);
    life = RandF(0.15000000596046448f, 0.15000000596046448f);
    func_0D2058(1, a1, pos, size, life, 0.75f, d, spin, 0xFF037CFA, 0xA0037CFA, a0, 1, 0);
}
