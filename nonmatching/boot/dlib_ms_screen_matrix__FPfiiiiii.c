/* USA SCUS_976.15 boot: dlib_ms_screen_matrix__FPfiiiiii, 0x01E938D8.
 * Observed body: 220 bytes, followed by alignment padding up to the 232-byte interval.
 * Measured 17 November 2026: compiled 212 bytes (53 words) under the default
 * GNU route and gnu-ee-trial, 220 bytes (55 words) under gnu-ee-trial-divpad
 * (which supplies the two nops before the divide); 15 of 55 words equal
 * positionally under each; independently linked
 * comparison: 119 of 220 bytes equal (155 under divpad), first difference at byte 1. Not exact; no complete-program gate, promotion or C matching credit.
 * Reconstructed from the retail boot. It builds a 4x4 float matrix that maps
 * normalised device coordinates to a screen rectangle: scale c/2 and d/2 on the
 * diagonal, a depth scale of e / -2, and a translation that adds the offsets
 * a and b to a fixed screen centre (1792 and 1840); the last argument is unused.
 * The remaining difference is instruction scheduling and float register
 * numbering: retail converts the integer arguments in the order e, d, c, b, a and
 * interleaves the zero stores differently (e.g. it stores 1.0 first, then the
 * zero words at 0x2C, 0x10, then c/2 at 0x0), and its 0.5 and 0.0 constants take
 * registers $f6 and $f0 where ours differ. Float constants held in named locals
 * were needed to keep the divide by -2 and the subtract of 0 (otherwise they fold).
 * Reopen when a source shape is found that reproduces the retail scheduling of
 * the sixteen stores against the five int-to-float conversions.
 */
void dlib_ms_screen_matrix__FPfiiiiii(float *m, int a, int b, int c, int d, int e, int f)
{
    float half = 0.5f;
    float zero = 0.0f;
    float neg2 = -2.0f;
    float one = 1.0f;
    float hh = (float)d * half;
    float hw = (float)c * half;
    float z = ((float)e - zero) / neg2;
    m[15] = one;
    m[11] = zero;
    m[4] = zero;
    m[0] = hw;
    m[8] = zero;
    m[1] = zero;
    m[5] = hh;
    m[10] = z;
    m[9] = zero;
    m[2] = zero;
    m[6] = zero;
    m[12] = hw + 1792.0f + (float)a;
    m[13] = 1840.0f - hh + (float)b - zero;
    m[14] = zero - z;
    m[3] = zero;
    m[7] = zero;
}
