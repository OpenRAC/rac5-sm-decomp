/* USA LEVEL_01:0B7FA8, 108-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 108 bytes: 3 differing words; first difference +0x58. No matching credit.
 * Remaining issue: epilogue order: the unused c.lt.s is reproduced (23->3 words) by two
 * identical store arms that jump2 cross-jumps after sched2; retail interleaves ld ra before the
 * final sw, ours keeps sw;ld s0;ld ra (label before the epilogue); duplicate arms are not
 * natural C, flags/assemblers/arm orders tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x0B7FA8 -- refreshes one table slot, then copies its pending state into the current state. */
typedef struct { int state; char pad04[8]; int pending; char pad10[0x1C]; float f2C; char pad30[8]; } Slot;
extern Slot D_001FC928[];
extern void func_0B7350(Slot *s);

void func_0B7FA8(int index)
{
    Slot *s = &D_001FC928[index];

    func_0B7350(s);
    if (s->state == 3 || s->state == 5) {
        if (s->f2C > 1.0f) {
            s->state = s->pending;
            return;
        }
    }
    s->state = s->pending;
}
