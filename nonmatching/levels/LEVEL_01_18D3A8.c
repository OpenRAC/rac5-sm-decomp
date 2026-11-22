/* USA LEVEL_01.REL:0x18D3A8, 244-byte candidate (21 November 2026).
 * Measured pinned: 4 differing words; first difference at 0x58.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct ATRACInst ATRACInst;

typedef struct {
    char pad00[0x18];
    int vol_a;
    int vol_b;
} Settings;

extern unsigned int D_001F3FB8;
extern unsigned int D_00208704;
extern char D_00208600[];
extern ATRACInst *D_002085F8;
extern Settings *D_001F3FAC;

extern void SND_SetVOVolume__Ff(float v);
extern ATRACInst *SND_PlayATRAC__FPCcPifb(const char *name, int *out, float vol, int loop);
extern int SND_IsATRACPlaying__FP13ATRACInstance(ATRACInst *a);
extern void func_18D340(int a);

static __inline__ float *maxRef(float *a, float *b)
{
    return (*a < *b) ? b : a;
}

void func_18D3A8(void)
{
    float v[2];
    float *p;
    float *q;

    if (!(D_001F3FB8 < D_00208704)) {
        if (D_00208600[0] != 0 && D_002085F8 == 0) {
            p = &v[0];
            q = &v[1];
            v[0] = (float)D_001F3FAC->vol_b / 255.0f;
            v[1] = (float)D_001F3FAC->vol_a / 255.0f;
            SND_SetVOVolume__Ff(*maxRef(p, q));
            D_002085F8 = SND_PlayATRAC__FPCcPifb(D_00208600, 0, 1.0f, 1);
            D_00208600[0] = 0;
        }
    }
    if (D_002085F8 != 0) {
        if (SND_IsATRACPlaying__FP13ATRACInstance(D_002085F8) == 0)
            func_18D340(0);
    }
}
