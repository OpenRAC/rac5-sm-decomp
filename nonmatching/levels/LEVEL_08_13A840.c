/* USA LEVEL_08:13A840, 124-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Byte-exact in an isolated link, but held for a local prototype conflict; no matching credit.
 * Remaining issue: new: vector pair blend (out0 = s*a + c*b, out1 = s*b - c*a) with both inputs
 * read into locals first; also exact on gnu-ee-trial and sdk991111; CONFLICT: accepted callers
 * LEVEL_08_1CA4C8 / 1F51B0 declare it int func_13A840(void*,void*,void*,void*,float,float)
 * (result unused); the body never writes v0, so it is void here
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_08:0x13A840 -- rotates a vector pair: out0 = s*a + c*b, out1 = s*b - c*a. */
void func_13A840(float *o0, float *o1, const float *a, const float *b, float c, float s)
{
    float ax = a[0], ay = a[1], az = a[2];
    float bx = b[0], by = b[1], bz = b[2];

    o0[0] = s * ax + c * bx;
    o0[1] = s * ay + c * by;
    o0[2] = s * az + c * bz;
    o1[0] = s * bx - c * ax;
    o1[1] = s * by - c * ay;
    o1[2] = s * bz - c * az;
}
