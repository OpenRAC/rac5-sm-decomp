/* USA LEVEL_08:20FD90, 188-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 188 bytes: 10 differing words; first difference +0x4. No matching credit.
 * Remaining issue: prologue order only: reading q->a into a local at the loop top fixed the
 * argument load order (12 -> 10); remaining: retail copies a0, a1, t0, a3 and a2 (a2 in the call
 * delay slot) into s3/s4/s0/s1/s5, ours copies a3 first and t0 last (sched2 tie);
 * iterator/param/scheduling-flag variants unchanged
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_08:0x20FD90 -- walks a 12-byte record array, submits each non-empty span, then runs a tail call. */
struct Rec {
    int a;
    int b;
    int c;
};

void func_03A160(void *p0, void *p1, void *p2, struct Rec *base);
void func_03A3A8(int a, int count, void *p0, void *p1, int first, void *p2);
void func_03A360(void *p0, void *p1);

void func_20FD90(void *p0, void *p1, void *p2, struct Rec *base, int count)
{
    struct Rec *end;
    struct Rec *q;
    int n;

    q = base;
    func_03A160(p0, p1, p2, base);
    end = (struct Rec *)((char *)base + count * 12);
    for (; q != end; q++) {
        int b;
        int a;

        a = q->a;
        b = q->b;
        n = ((q->c - b) * 0x38E38E39) >> 4;
        if (n > 0) {
            func_03A3A8(b, n, p0, p1, a, p2);
        }
    }
    func_03A360(p0, p1);
}
