/* USA LEVEL_01:0DBF48, 156-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 152 bytes: 27 differing words; first difference +0x18. No matching credit.
 * Remaining issue: semantic fix: retail clamps min(step,3) then max(.,0) (draft had max); level
 * = 3; if (step <= 2) level = step; step = level > -1 ? level : 0 gives the retail prologue
 * (t0/a3 copies), step==4 block layout and li 2/slt/li -1 compares (152 vs 156 B); remaining:
 * GCC folds one of the two cmovs in place (movn a3 / movz zero) where retail keeps level in a0
 * and a 0-preloaded result in a3; MIN/MAX inline helpers (16 forms), early result locals, flags
 * tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x0DBF48 -- registers a handler pair for the object with a key built from the level step clamped to 0..3 (9 for step 4) and a table word. */
extern unsigned int D_00297DC0[];
extern void func_0DB810(void);
extern void func_0DB648(void);
extern void func_096948(char *buf, unsigned a, void (*f)(void), int size, int b, int c, void (*g)(void));

void func_0DBF48(char *obj, int step, int index)
{
    int level;
    int shift;

    if (step == 4) {
        shift = 9;
    } else {
        level = 3;
        if (step <= 2)
            level = step;
        step = (level > -1) ? level : 0;
        shift = 0x13 - step;
    }
    func_096948(obj, (shift << 27) | (D_00297DC0[index] << 16) | 0x70C4, func_0DB810, 0x6C, 0, -1, func_0DB648);
}
