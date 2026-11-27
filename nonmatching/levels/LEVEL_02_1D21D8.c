/* USA LEVEL_02:1D21D8, 188-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 192 bytes: 34 differing words; first difference +0x28. No matching credit.
 * Remaining issue: callee prototypes fixed to the accepted void *func_1D2090(void) and int
 * func_1D33A8(void); shared final return 0 (decrement path, then clamp) gives 192 vs 188 B;
 * remaining: retail branches to the epilogue for return 1 after func_1D2090 (bnez, b dec with
 * the p->f70 load in both slots), the t/lim stack slots are swapped (declaration order does not
 * move them); -fexceptions, goto/flag forms tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_02:0x1D21D8 -- steps an object's float field down by one, or up to a cap, after probes. */
struct Obj {
    char pad[0x70];
    float f70;
};

extern void *func_1D2090(void);
extern int func_1D33A8(void);

int func_1D21D8(struct Obj *p, unsigned char *q)
{
    float f;
    float t;
    float lim;
    float *pr;

    if (q != 0 && q[0x45] != 0) {
        if (func_1D2090() != 0)
            return 1;
        goto dec;
    }
    if ((struct Obj *)func_1D33A8() == p) {
dec:
        f = p->f70 - 1.0f;
        p->f70 = f;
        if (f <= 0.0f)
            return 1;
    } else {
        t = p->f70 + 1.0f;
        lim = 15.0f;
        pr = (t < lim) ? &t : &lim;
        p->f70 = *pr;
    }
    return 0;
}
