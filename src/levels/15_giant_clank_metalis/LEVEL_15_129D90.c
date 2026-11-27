/* LEVEL_15:0x129D90 -- fills in the reciprocal scale factors and the three table-indexed register words of a two-layer render setup record. */
typedef struct {
    float scale;
    char pad04[0x10];
    char sub[0xA8];
} Layer;

typedef struct {
    char pad0[4];
    int count;
    Layer layer[2];
    int idxA;
    unsigned int regA;
    char pad188[0x24];
    float f_1AC;
    float f_1B0;
    float f_1B4;
    char pad1B8[0x14];
    int idxB;
    unsigned int regB;
    char pad1D4[8];
    int idxC;
    unsigned int regC;
    char pad1E4[8];
    float f_1EC;
    char sub1F0[1];
} Setup;

extern int D_001AFE00[];

extern void func_1294B0(char *sub);
extern void func_0E6508(char *sub, float a, float b, float c);

static __inline__ void SetReg(unsigned int *r, int idx, unsigned int mode)
{
    unsigned int v;

    v = *r;
    v = (v & 0xF800FFFFU) | (D_001AFE00[idx] << 16);
    v = (v & 0xFFFFFFC3U) | mode;
    v = (v & 0xFFFFFFFCU) | 1U;
    *r = v;
}

void func_129D90(float *out, Setup *s)
{
    unsigned int i;

    i = 0;
    do {
        func_1294B0(s->layer[i].sub);
        out[i + 1] = 1.0f / s->layer[i].scale;
        i++;
    } while (i < 2);
    out[4] = 1.0f / (float)s->count;
    SetReg(&s->regA, s->idxA, 0x20U);
    SetReg(&s->regB, s->idxB, 0x10U);
    SetReg(&s->regC, s->idxC, 0x10U);
    s->f_1EC = 1.0f / s->f_1AC;
    func_0E6508(s->sub1F0, s->f_1B0, s->f_1B4, 0.03333333507180214f);
}
