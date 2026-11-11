/* LEVEL_16:0x163488 -- placement copy of LEVEL_01_197090.c: spawns a particle effect at the object's anchor point, applies the optional effect preset and runs the follow-up helper with the effect flag set only around it. */

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

extern int D_001BDF04;
extern int D_001BDF08;
extern int D_001BDF0C;
extern char D_001BDF80[];
extern char D_001BE580[];
extern char D_001D5DE8[];
extern void func_0732F8(char *o, float *v, int a, int b);
extern void func_0DAC90(int a, float *v);
extern void func_193310(int a, int b, Burst *s, int c, float f0, float f1);
extern Preset *func_021B90(int id);
extern void func_073518(char *o, Preset *p, int a2, int a3, int t0, int t1, int t2, int t3, float f12, float f13, float f14, float f15);
extern void func_18C2F8(int a, char *p, char *q, char *r, char *s);
extern void func_1635D8(char *o, float f);

static __inline__ void CopyVec(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_163488(char *o)
{
    float v[3];
    Burst s;
    float zf;
    char *rec;
    Preset *pre;

    func_0732F8(o, v, 0, 0);
    func_0DAC90(13, v);
    s.zero = 0;
    CopyVec(s.pos, v);
    s.d = D_001D5DE8;
    s.a = 0.5f;
    s.b = 0.8f;
    s.c = -0.5f;
    zf = *(float *)&s.zero;
    func_193310(D_001BDF04, D_001BDF08, &s, 25, zf, zf);
    rec = *(char **)(o + 0x58);
    pre = func_021B90(4);
    if (pre) {
        func_073518(o, pre, 0, 0, 0, 0, 0, 1, pre->f_14, pre->f_18, pre->f_1C, pre->f_20);
    }
    rec += 4;
    *(unsigned short *)(rec + 0xC) |= 8;
    func_18C2F8(D_001BDF0C, o + 0x30, o + 0x10, D_001BDF80, D_001BE580);
    *(unsigned short *)(rec + 0xC) &= 0xFFF7;
    func_1635D8(o, 2.0f);
}
