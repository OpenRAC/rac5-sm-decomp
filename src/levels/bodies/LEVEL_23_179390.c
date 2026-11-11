/* LEVEL_23:0x179390 -- placement copy of LEVEL_01_197090.c: spawns a particle effect at the object's anchor point, applies the optional effect preset and runs the follow-up helper with the effect flag set only around it. */

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

extern int D_001DBD2C;
extern int D_001DBD30;
extern int D_001DBD34;
extern char D_001DBDA8[];
extern char D_001DC500[];
extern char D_001F4578[];
extern void func_077BB0(char *o, float *v, int a, int b);
extern void func_0E2818(int a, float *v);
extern void func_1B3268(int a, int b, Burst *s, int c, float f0, float f1);
extern Preset *func_0222D8(int id);
extern void func_077DD0(char *o, Preset *p, int a2, int a3, int t0, int t1, int t2, int t3, float f12, float f13, float f14, float f15);
extern void func_1A85B8(int a, char *p, char *q, char *r, char *s);
extern void func_1794E0(char *o, float f);

static __inline__ void CopyVec(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_179390(char *o)
{
    float v[3];
    Burst s;
    float zf;
    char *rec;
    Preset *pre;

    func_077BB0(o, v, 0, 0);
    func_0E2818(13, v);
    s.zero = 0;
    CopyVec(s.pos, v);
    s.d = D_001F4578;
    s.a = 0.5f;
    s.b = 0.8f;
    s.c = -0.5f;
    zf = *(float *)&s.zero;
    func_1B3268(D_001DBD2C, D_001DBD30, &s, 25, zf, zf);
    rec = *(char **)(o + 0x58);
    pre = func_0222D8(4);
    if (pre) {
        func_077DD0(o, pre, 0, 0, 0, 0, 0, 1, pre->f_14, pre->f_18, pre->f_1C, pre->f_20);
    }
    rec += 4;
    *(unsigned short *)(rec + 0xC) |= 8;
    func_1A85B8(D_001DBD34, o + 0x30, o + 0x10, D_001DBDA8, D_001DC500);
    *(unsigned short *)(rec + 0xC) &= 0xFFF7;
    func_1794E0(o, 2.0f);
}
