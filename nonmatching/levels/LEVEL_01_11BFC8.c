/* USA LEVEL_01:11BFC8, 160-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 160 bytes: 20 differing words; first difference +0x4. No matching credit.
 * Remaining issue: rewritten: three dot products into a local vector, and func_11B748 takes all
 * eight arguments (its retail body reads a1, a2, a3, t0, t1) passed straight through - this
 * reproduces the parameter copies v0/v1/t4 and the 160-byte length (old draft 80 B); remaining:
 * FP schedule, retail issues the second row's loads/products before the first row's (registers
 * f1/f3/f5..f9 rotate); 6 statement orders, component locals, separate result locals, 4
 * profiles, 4 flags
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x11BFC8 -- transforms a vector by three basis rows (one dot product each) and hands the result, with all the other arguments passed through, to the helper. */
extern void func_11B748(int a, float *b, float *v, float *d, float *e, float *r0, float *r1, float *r2);

void func_11BFC8(int a, float *b, float *v, float *d, float *e, float *r0, float *r1, float *r2)
{
    float out[3];

    out[0] = v[0] * r0[0] + v[1] * r0[1] + v[2] * r0[2];
    out[1] = v[0] * r1[0] + v[1] * r1[1] + v[2] * r1[2];
    out[2] = v[0] * r2[0] + v[1] * r2[1] + v[2] * r2[2];
    func_11B748(a, b, out, d, e, r0, r1, r2);
}
