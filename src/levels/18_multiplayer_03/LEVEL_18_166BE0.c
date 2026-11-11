/* LEVEL_18:0x166BE0 -- placement copy of LEVEL_01_197090.c: spawns a particle effect at the object's anchor point, applies the optional effect preset and runs the follow-up helper with the effect flag set only around it. */

typedef struct {
    float pos[3];
    float a;
    float b;
    int zero;
    float c;
    char *d;
} Burst;

typedef struct {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Preset;

extern int D_001BF4C4;
extern int D_001BF4C8;
extern int D_001BF4CC;
extern char D_001BF540[];
extern char D_001BFB40[];
extern char D_001D6F58[];
extern void func_0729A8(char *o, float *v, int a, int b);
extern void func_0D8A50(int a, float *v);
extern void func_1947B0(int a, int b, Burst *s, int c, float f0, float f1);
extern Preset *func_0211D8(int id);
extern void func_072BC8(char *o, Preset *p, int a2, int a3, int t0, int t1, int t2, int t3, float f12, float f13, float f14, float f15);
extern void func_18D798(int a, char *p, char *q, char *r, char *s);
extern void func_166D30(char *o, float f);

static __inline__ void CopyVec(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_166BE0(char *o)
{
    float v[3];
    Burst s;
    float zf;
    char *rec;
    Preset *pre;

    func_0729A8(o, v, 0, 0);
    func_0D8A50(13, v);
    s.zero = 0;
    CopyVec(s.pos, v);
    s.d = D_001D6F58;
    s.a = 0.5f;
    s.b = 0.8f;
    s.c = -0.5f;
    zf = *(float *)&s.zero;
    func_1947B0(D_001BF4C4, D_001BF4C8, &s, 25, zf, zf);
    rec = *(char **)(o + 0x58);
    pre = func_0211D8(4);
    if (pre) {
        func_072BC8(o, pre, 0, 0, 0, 0, 0, 1, pre->f_14, pre->f_18, pre->f_1C, pre->f_20);
    }
    rec += 4;
    *(unsigned short *)(rec + 0xC) |= 8;
    func_18D798(D_001BF4CC, o + 0x30, o + 0x10, D_001BF540, D_001BFB40);
    *(unsigned short *)(rec + 0xC) &= 0xFFF7;
    func_166D30(o, 2.0f);
}
