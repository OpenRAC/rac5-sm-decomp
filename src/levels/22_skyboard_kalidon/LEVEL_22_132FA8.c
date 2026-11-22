/* LEVEL_22:0x132FA8 -- spawns one randomised particle: random scale, drift and spin values handed to the particle emitter. */
extern int rand(void);

extern void func_0C9768(int one, int p2, int p3, float a, float b, float c, float d, float e, unsigned int k1, unsigned int k2, int obj, int one2, int type);

static __inline__ float RandF(float scale, float bias)
{
    return (float)rand() * 4.6566129e-10f * scale + bias;
}

void func_132FA8(int obj, int p2, int p3)
{
    float a;
    float e;
    float d;
    float b;

    a = RandF(0.07500000298023224f, 0.07500000298023224f);
    e = RandF(1.5707963705062866f, 0.0f);
    d = RandF(0.0009999999310821295f, 0.0033333336468786f);
    b = RandF(0.0599999874830246f, 0.15000000596046448f);
    func_0C9768(1, p2, p3, a, b, 0.5f, d, e, 0xFFFABD63, 0xA0CA7B07, obj, 1, 0xE);
}
