/* USA LEVEL_01:000A80, 208-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 208 bytes: 2 differing words; first difference +0x24. No matching credit.
 * Remaining issue: delay-slot/early-return form: early return if (r != 0) return r; plus goto
 * found for the match (beq into the epilogue with v0 = i) gives the retail s0..s3 order (was 28
 * words); retail returns r through the shared end copy (bnez + daddu v0,s0 in the delay) while
 * this form jumps straight into the epilogue (bnel + ld s0); the shared-return form (if (r == 0)
 * {...} return r;) restores the delay slot but rotates r/a/b/c to s3..s0 (14 words)
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x000A80 -- when func_0006B0 reports nothing, reads four values and returns the index (8..13) of the first record in the table whose first four words equal them; returns the first call's result otherwise. */
typedef struct {
    int w[5];
} Rec;

extern Rec D_0020B810[];
extern int func_0006B0(void);
extern int func_0002D8(int a);

int func_000A80(void)
{
    int r;
    int a;
    int b;
    int c;
    int d;
    unsigned int i;
    Rec *p;

    r = func_0006B0();
    if (r != 0)
        return r;
    a = func_0002D8(1);
    b = func_0002D8(0);
    c = func_0002D8(3);
    d = func_0002D8(5);
    for (i = 8; i < 14; i++) {
        p = &D_0020B810[i];
        if (p->w[0] == a && p->w[1] == b && p->w[2] == c && p->w[3] == d)
            goto found;
    }
    return r;
found:
    return i;
}
