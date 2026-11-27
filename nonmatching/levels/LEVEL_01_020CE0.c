/* USA LEVEL_01:020CE0, 208-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 208 bytes: 9 differing words; first difference +0x2C. No matching credit.
 * Remaining issue: register swap: retail gives the 7th argument (t2) s4 and the 2nd (a0) s5,
 * ours the reverse (global-alloc tie); the or operand order is fixed by a separate result local
 * (more | hit); 7 flags x 2 profiles same
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x020CE0 -- runs a probe, flags the record on a hit, then forwards to the follow-up routine. */
typedef struct {
    char pad0[0x14];
    int flag;
} Rec;

extern int D_00206D9C;
extern int func_1161A0(float *out, Rec *r, void *p, int a, int b, int c);
extern int func_020DB0(float f, int a0, Rec *r, int a2, int a3, int a4, int a5, int a6);

int func_020CE0(float f, int a0, Rec *r, int a2, int a3, int a4, int a5, int a6)
{
    int hit;
    int more;

    hit = 0;
    if (func_1161A0(&f, r, (char *)r + 0xC, a2, a3, D_00206D9C)) {
        hit = 1;
        r->flag = hit;
    }
    more = func_020DB0(f, a0, r, a2, a3, a4, a5, a6) != 0;
    return more | hit;
}
