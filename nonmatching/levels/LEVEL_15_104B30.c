/* USA LEVEL_15:104B30, 192-byte candidate; measured 26 November 2026.
 * Profile gnu-ee-trial, assembler gnu-ee-trial; options: default.
 * Compiled 192 bytes: 9 differing words; first difference +0x1C. No matching credit.
 * Remaining issue: register swap: increments in the for header (q, i, p) and accepted callee
 * prototypes reach 9 words (was 11); retail keeps q in s1 and i in s2 (ours i in s1, q in s2)
 * and steps p before q; 36 decl/init/increment orders, indexed-array forms (givs merge, 176 B),
 * pinned/sdk991111 tried; LEVEL_21:104B30 same
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_15:0x104B30 -- for eight indices, calls one of two helpers on a per-index record, chosen by the bits of a mask. */

extern void func_0FE850(char *a, char *b, float c, float d);
extern void func_0FE8B8(void *p);

void func_104B30(char *a0, int a1, float fa, float fb)
{
    char *p;
    char *q;
    int i;

    p = a0 + 0x278;
    q = a0 + 0x278;
    for (i = 0; i < 8; q += 0x30, i++, p += 0x30) {
        if (((a1 >> i) & 1) != 0) {
            func_0FE850(q, (char *)(*(int *)(a0 + 0x430) + 0x60 + i * 12), fa, fb);
        } else {
            func_0FE8B8(p);
        }
    }
}
