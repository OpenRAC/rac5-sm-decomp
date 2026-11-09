/* LEVEL_01.REL:0x197090: reviewed 332-byte candidate, held for ABI review.
 * Spawns a particle effect at the object's anchor point, applies the optional
 * effect preset and runs the follow-up helper with the effect flag set only
 * around it.
 * pinned C with gnu-ee-trial links 332/332 bytes and is byte-exact at this and
 * 15 other USA placements, but the prototypes disagree.
 * It declares func_0EF930 returning void with (int, pointer), but the accepted
 * LEVEL_01_0EF930.c defines it returning void with (int).
 * It declares func_024238 returning pointer with (int), but the accepted
 * LEVEL_01_024238.c defines it returning int with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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

extern int D_0020885C;
extern int D_00208860;
extern int D_00208864;
extern char D_002088D8[];
extern char D_00209280[];
extern char D_00224B98[];
extern void func_0807B0(char *o, float *v, int a, int b);
extern void func_0EF930(int a, float *v);
extern void func_1E1DE8(int a, int b, Burst *s, int c, float f0, float f1);
extern Preset *func_024238(int id);
extern void func_0809D0(char *o, Preset *p, int a2, int a3, int t0, int t1, int t2, int t3, float f12, float f13, float f14, float f15);
extern void func_1D6C20(int a, char *p, char *q, char *r, char *s);
extern void func_1971E0(char *o, float f);

static __inline__ void CopyVec(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_197090(char *o)
{
    float v[3];
    Burst s;
    float zf;
    char *rec;
    Preset *pre;

    func_0807B0(o, v, 0, 0);
    func_0EF930(13, v);
    s.zero = 0;
    CopyVec(s.pos, v);
    s.d = D_00224B98;
    s.a = 0.5f;
    s.b = 0.8f;
    s.c = -0.5f;
    zf = *(float *)&s.zero;
    func_1E1DE8(D_0020885C, D_00208860, &s, 25, zf, zf);
    rec = *(char **)(o + 0x58);
    pre = func_024238(4);
    if (pre) {
        func_0809D0(o, pre, 0, 0, 0, 0, 0, 1, pre->f_14, pre->f_18, pre->f_1C, pre->f_20);
    }
    rec += 4;
    *(unsigned short *)(rec + 0xC) |= 8;
    func_1D6C20(D_00208864, o + 0x30, o + 0x10, D_002088D8, D_00209280);
    *(unsigned short *)(rec + 0xC) &= 0xFFF7;
    func_1971E0(o, 2.0f);
}
