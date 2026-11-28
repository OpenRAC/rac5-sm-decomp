/* USA SCUS_976.15 boot, RENDEREFFECT_Init__Fv at 0x01E7D200.
 * Observed body: 588 bytes, followed by one zero padding word inside the
 * 592-byte interval. Reconstructed from the retail program. Measured
 * 28 November 2026: not exact. Default pinned route, -O2 -G0: 564 compiled
 * bytes against 588, first difference at byte 0 (frame size); gnu-ee-trial and
 * the divpad routes give the same shape. Every instruction class is present;
 * the only structural difference is loop-invariant motion: retail keeps 2.0,
 * 24.0, 17.0 and 0.1 in four saved float registers set before the outer loop
 * (0x60 frame, f20-f23 saved), while the compiled body hoists only 2.0 and
 * 24.0 and reloads 17.0 and 0.1 in every inner iteration (0x50 frame).
 *
 * Clears the swirl, full-screen bloom and colour-multiply flags; on the first
 * call it fills a 128-entry sine table (step 2*pi/128) and a 49x35 byte table
 * of clamped distances from (24, 17) with the vertical axis weighted by 2,
 * scaled by the float at 0x01EF1090; it then marks the tables ready and always
 * calls RENDEREFFECT_Reset. Same table idiom as the accepted
 * MCPTRANS_Fade_Init__Fv (which also keeps the weight in a local; a literal
 * 2.0 is folded to an add). Unnamed globals use address names.
 * Tried without fixing the hoisting: literal weight, division by 0.5, named
 * locals for the constants at function scope (every subset; also hoists 1.0
 * and 0.0, worse), dy computed first, early r = 0, else-branch -1.0, 2-D
 * table and if-clamp.
 * Reopen with a source form that shrinks the inner loop or lengthens the
 * lifetimes of the 17.0 and 0.1 loads enough for loop.c to move them, or with
 * evidence of a different loop-motion threshold in the original compiler.
 */
extern float sinf(float);
extern float sqrtf(float);
extern void RENDEREFFECT_Reset__Fv(void);

extern unsigned char g_RENDEREFFECT_COLORMUL_Enable;
extern unsigned char g_RENDEREFFECT_BLOOM_bFullScreen;
extern unsigned char g_RENDEREFFECT_SWIRLY_Active;
extern unsigned char D_01EF1094;
extern float D_01EF1090;
extern float D_01F74758[128];
extern unsigned char D_01F740A0[];

void RENDEREFFECT_Init__Fv(void)
{
    unsigned int k;
    unsigned int i;
    unsigned int j;
    float phase;

    g_RENDEREFFECT_SWIRLY_Active = 0;
    g_RENDEREFFECT_BLOOM_bFullScreen = 0;
    g_RENDEREFFECT_COLORMUL_Enable = 0;
    if (!D_01EF1094) {
    phase = 0.0f;
    for (k = 0; k < 0x80; k++) {
        D_01F74758[k] = sinf(phase);
        phase += 0.0490873866f;
    }
    for (i = 0; i < 0x31; i++) {
        for (j = 0; j < 0x23; j++) {
            float d;
            float dy;
            float s;
            float r;
            unsigned int v;

            s = 2.0f;
            d = (float)i - 24.0f;
            d = d * d;
            dy = (float)j - 17.0f;
            dy = dy * dy;
            dy = dy * s;
            d = d + dy;
            r = 0.0f;
            if (d > 0.1f) {
                r = sqrtf(d);
            }
            r = r - 1.0f;
            if (r < 0.0f) {
                r = 0.0f;
            }
            v = (unsigned int)(r * D_01EF1090);
            D_01F740A0[j * 0x31 + i] = v < 0x100 ? v : 0xFF;
        }
    }
    D_01EF1094 = 1;
    }
    RENDEREFFECT_Reset__Fv();
}
