/* LEVEL_08:0x1C7240 -- placement copy of LEVEL_01_197090.c: spawns a particle effect at the object's anchor point, applies the optional effect preset and runs the follow-up helper with the effect flag set only around it. */

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

extern int D_00251F84;
extern int D_00251F88;
extern int D_00251F8C;
extern char D_00252000[];
extern char D_00252D70[];
extern char D_00271EC8[];
extern void func_088720(char *o, float *v, int a, int b);
extern void func_0FB378(int a, float *v);
extern void func_225590(int a, int b, Burst *s, int c, float f0, float f1);
extern Preset *func_024AB8(int id);
extern void func_088940(char *o, Preset *p, int a2, int a3, int t0, int t1, int t2, int t3, float f12, float f13, float f14, float f15);
extern void func_217F78(int a, char *p, char *q, char *r, char *s);
extern void func_1C7390(char *o, float f);

static __inline__ void CopyVec(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_1C7240(char *o)
{
    float v[3];
    Burst s;
    float zf;
    char *rec;
    Preset *pre;

    func_088720(o, v, 0, 0);
    func_0FB378(13, v);
    s.zero = 0;
    CopyVec(s.pos, v);
    s.d = D_00271EC8;
    s.a = 0.5f;
    s.b = 0.8f;
    s.c = -0.5f;
    zf = *(float *)&s.zero;
    func_225590(D_00251F84, D_00251F88, &s, 25, zf, zf);
    rec = *(char **)(o + 0x58);
    pre = func_024AB8(4);
    if (pre) {
        func_088940(o, pre, 0, 0, 0, 0, 0, 1, pre->f_14, pre->f_18, pre->f_1C, pre->f_20);
    }
    rec += 4;
    *(unsigned short *)(rec + 0xC) |= 8;
    func_217F78(D_00251F8C, o + 0x30, o + 0x10, D_00252000, D_00252D70);
    *(unsigned short *)(rec + 0xC) &= 0xFFF7;
    func_1C7390(o, 2.0f);
}
