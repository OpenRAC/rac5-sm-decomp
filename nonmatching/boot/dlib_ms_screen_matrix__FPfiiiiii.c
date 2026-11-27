/* USA SCUS_976.15 boot: dlib_ms_screen_matrix__FPfiiiiii, 0x01E938D8.
 * Observed body: 220 bytes, followed by alignment padding up to the 232-byte
 * interval. Measured 26 November 2026: all 220 body bytes are exact after
 * independent SN linking at the retail address under the level profile
 * gnu-ee-trial-divpad (which supplies the two nops before the float divide),
 * with -O2 -G0 and the default GNU assembler. Under the rebuilt default GNU
 * route and gnu-ee-trial it compiles to 212 bytes (no divide padding) and is
 * not exact there: 133 of 220 bytes equal after linking, first difference at
 * byte 96, where retail has the two nops before the divide. Reopen for the
 * default route only if that route gains the divide padding. The tools are
 * rebuilt, not hash-qualified. This is an unaccepted witness: complete-program
 * integration, boundaries, types and qualification require separate review. No
 * promotion or matching credit is claimed here. Reconstructed from the retail
 * boot. It builds a 4x4 float matrix that maps normalised device coordinates
 * to a screen rectangle: scale c/2 and d/2 on the diagonal, a depth scale of e
 * / -2, and a translation that adds the offsets a and b to a fixed screen
 * centre (1792 and 1840); the last argument is unused. The store order
 * mattered: the stores of the scales must come before the translation that
 * reuses them, the translation row is written early except its y component,
 * and the zero at index 11 is the last zero stored. Float zero and -2 are
 * named locals; as literals the zero stores become integer stores and the
 * divide folds into a multiply.
 */
void dlib_ms_screen_matrix__FPfiiiiii(float *m, int a, int b, int c, int d, int e, int f)
{
    float zero = 0.0f;
    float neg2 = -2.0f;
    float z = ((float)e - zero) / neg2;
    float hh = (float)d * 0.5f;
    float hw = (float)c * 0.5f;
    m[15] = 1.0f;
    m[14] = zero - z;
    m[12] = hw + 1792.0f + (float)a;
    m[4] = zero;
    m[10] = z;
    m[8] = zero;
    m[1] = zero;
    m[5] = hh;
    m[9] = zero;
    m[2] = zero;
    m[6] = zero;
    m[13] = 1840.0f - hh + (float)b - zero;
    m[3] = zero;
    m[7] = zero;
    m[11] = zero;
    m[0] = hw;
}
