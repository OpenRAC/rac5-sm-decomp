/* USA LEVEL_01:0C3AA8, 180-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 180 bytes: 20 differing words; first difference +0x20. No matching credit.
 * Remaining issue: branch layout / delay-slot fill (from 24 words): retail registers imply
 * func_0B96A8(D_003291B0, flags) and func_134070(0, t->fD4), which agree with the accepted two-
 * argument prototypes (now declared so); remaining: reorg fills the first beqz with the target
 * andi 0x1000 instead of retail li a0,7 (copy deleted in the target), and retail places the
 * func_0B96A8 call after func_01A828 (goto form gets that order but 176 B); -fno-sched-
 * interblock, -fexceptions, predicate forms tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x0C3AA8 -- chooses a setup path from a flag word (two func_0B6020 steps or the single func_0B96A8 call), then wakes the object found for the shared handle when it has the extra field set. */
typedef struct {
    char pad00[0xD4];
    int fD4;
} Target;

extern char D_003291B0[];
extern unsigned int func_088020(int value);
extern int func_0B6020(int index);
extern int func_0BCB20(void);
extern void func_01A828(int a, int b);
extern int func_0B96A8(void *m, int a);
extern int func_0BA408(void *p);
extern int func_134070(int a, int b);

void func_0C3AA8(void)
{
    unsigned int flags;
    Target *t;

    flags = func_088020(0x6B10);
    if (flags & 8) {
        func_0B6020(7);
        func_0B6020(0);
    } else {
        if ((flags & 0x1000) == 0) {
            func_0B96A8(D_003291B0, flags);
            goto lab;
        }
        func_0B6020(7);
        func_0B6020(0);
        if (func_0BCB20() != 0)
            goto lab;
    }
    func_01A828(4, 0);
lab:
    t = (Target *)func_0BA408(D_003291B0);
    if (t != 0 && t->fD4 != 0)
        func_134070(0, t->fD4);
}
