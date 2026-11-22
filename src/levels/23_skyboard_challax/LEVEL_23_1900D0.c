/* LEVEL_23:0x1900D0 -- placement copy of LEVEL_22_1334A8.c: spawns one randomised particle: random scale, drift and spin values handed to the particle emitter. */
extern int rand(void);

extern void func_0D2058(int one, int p2, int p3, float a, float b, float c, float d, float e, unsigned int k1, unsigned int k2, int obj, int one2, int type);

static __inline__ float RandF(float scale, float bias)
{
    return (float)rand() * 4.6566129e-10f * scale + bias;
}

void func_1900D0(int obj, int p2, int p3)
{
    float a;
    float e;
    float d;
    float b;

    a = RandF(0.0066666677594184875f, 0.033333335f);
    e = RandF(1.5707964f, 0.0f);
    d = RandF(-0.0016666667070239782f, -0.0033333336468786f);
    b = RandF(0.030000001192092896f, 0.03999999910593033f);
    func_0D2058(1, p2, p3, a, b, 0.75f, d, e, 0xFF037CFA, 0xA0037CFA, obj, 1, 0);
}
