/* USA SCUS_976.15 boot: MCPTRANS_SHRINK_Animate__Ff, 0x01E6C4C8.
 * Observed body: 696 bytes, filling its next-label interval (the jr ra and
 * its delay slot are the last two words).
 * Measured 28 November 2026: all 696 body bytes are exact after an
 * independent link at the retail address under the default pinned route and
 * gnu-ee-trial, -O2 -G0, default GNU assembler. Local exactness with rebuilt
 * tools is not qualification, promotion or C matching credit.
 * Reconstructed from the retail boot. It advances the shrink transition:
 * the module timer grows by dt and, until the stop flag is set, a ramp
 * follows it; a sine-modulated offset minus the ramp is written to all three
 * components of a vector, and the stop flag is set once that value falls
 * below a threshold. The two spiral groups turn by a per-frame step wrapped
 * to [-pi, pi), the second half a turn ahead of the first. On the first call
 * both spiral spheres and the sound are started. The ramp then lowers the
 * anchor vectors and heights of the spirals through a rate vector.
 * Source shape that mattered: in the closing block the vector at 0x01EF06B8
 * is computed into its z member and copied to y and x, and the second
 * spiral height is computed before the first copies it; written in the
 * natural x, y, z / first, second order the stores are scheduled in a
 * different order (628 of 696 bytes). The timer and ramp are read as floats
 * here; MCPTRANS_SHRINK_Shutdown__Fv declares them int to store zero, which
 * needs a shared declaration before promotion. Spiral_Group is opaque except
 * for the three floats this body touches; other values keep their addresses.
 */
typedef struct { float x, y, z; } VEC3;
typedef struct Spiral_Group {
    char pad0[0x1C];
    float a1C;
    float a20;
    float a24;
    char pad28[0x10];
} Spiral_Group;
extern float mcptrans_shrink_w70C;
extern float mcptrans_shrink_w710;
extern unsigned char mcptrans_shrink_flag6F4;
extern unsigned char mcptrans_shrink_active;
extern Spiral_Group mcptrans_spiral1;
extern Spiral_Group mcptrans_spiral2;
extern float D_01EF06F8;
extern float D_01EF06E8;
extern float D_01EF06E4;
extern float D_01EF06EC;
extern float D_01EF06F0;
extern float D_01EF0668;
extern float D_01EF066C;
extern unsigned int D_01EF0670;
extern unsigned int D_01EF0674;
extern VEC3 D_01EF0678;
extern VEC3 D_01EF0688;
extern float D_01EF069C;
extern float D_01EF06AC;
extern VEC3 D_01EF06B8;
extern float D_01EF06C8;
extern float D_01EF06FC;
extern float D_01EF0700;
extern float D_01EF0704;
extern VEC3 D_01F67C78;
extern float sinf(float);
extern void SpiralSphere_Start__FP12Spiral_GroupPC4VEC3T1UifT1i(Spiral_Group *, const VEC3 *,
    const VEC3 *, unsigned int, float, const VEC3 *, int);
extern void MCPTRANS_SHRINK_StartSound__Fv(void);

void MCPTRANS_SHRINK_Animate__Ff(float dt) {
    float t;
    float v;
    VEC3 *d;
    mcptrans_shrink_w70C += dt;
    t = mcptrans_shrink_w70C;
    if (mcptrans_shrink_flag6F4 == 0)
        mcptrans_shrink_w710 = D_01EF06F8 * t;
    v = D_01EF06E4 + sinf(t * D_01EF06E8) * D_01EF06EC - mcptrans_shrink_w710;
    d = &D_01F67C78;
    D_01F67C78.x = v;
    d->y = v;
    d->z = v;
    if (v < D_01EF06F0)
        mcptrans_shrink_flag6F4 = 1;
    mcptrans_spiral1.a1C -= D_01EF0668;
    if (mcptrans_spiral1.a1C < -3.1415927f)
        mcptrans_spiral1.a1C += 6.2831855f;
    mcptrans_spiral1.a20 -= D_01EF0668;
    if (mcptrans_spiral1.a20 < -3.1415927f)
        mcptrans_spiral1.a20 += 6.2831855f;
    mcptrans_spiral2.a1C = mcptrans_spiral1.a1C + 3.1415927f;
    if (mcptrans_spiral2.a1C > 3.1415927f)
        mcptrans_spiral2.a1C -= 6.2831855f;
    mcptrans_spiral2.a20 = mcptrans_spiral1.a20;
    if (mcptrans_shrink_active == 0) {
        mcptrans_shrink_active = 1;
        SpiralSphere_Start__FP12Spiral_GroupPC4VEC3T1UifT1i(&mcptrans_spiral1, &D_01EF0678,
            &D_01EF0688, D_01EF0670, D_01EF066C, &D_01EF06B8, 1);
        SpiralSphere_Start__FP12Spiral_GroupPC4VEC3T1UifT1i(&mcptrans_spiral2, &D_01EF0678,
            &D_01EF0688, D_01EF0674, D_01EF066C, &D_01EF06B8, 1);
        MCPTRANS_SHRINK_StartSound__Fv();
    }
    D_01EF06B8.z = D_01EF06C8 - mcptrans_shrink_w710 * D_01EF06FC;
    D_01EF06B8.y = D_01EF06B8.z;
    D_01EF06B8.x = D_01EF06B8.z;
    mcptrans_spiral2.a24 = D_01EF066C - mcptrans_shrink_w710 * D_01EF0700;
    mcptrans_spiral1.a24 = mcptrans_spiral2.a24;
    D_01EF0678.y = D_01EF069C - mcptrans_shrink_w710 * D_01EF0704;
    D_01EF0688.y = D_01EF06AC - mcptrans_shrink_w710 * D_01EF0704;
}
