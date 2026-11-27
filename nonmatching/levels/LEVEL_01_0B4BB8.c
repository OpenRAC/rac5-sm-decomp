/* USA LEVEL_01:0B4BB8, 104-byte candidate; measured 26 November 2026.
 * Profile gnu-ee-trial, assembler gnu-ee-trial; options: default.
 * Compiled 104 bytes: 7 differing words; first difference +0x28. No matching credit.
 * Remaining issue: register assignment (104 B now, from 9 words at 100 B): direct D[index].field
 * stores keep the two separate address computations (reload builds one per memory address);
 * retail returns a copy of the second address and stores the level through it with the table
 * base in v0, ours CSEs the s pointer with the value store and keeps the base in a0; 60
 * direct/pointer/order/return combinations swept
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x0B4BB8 -- runs the slot check helper, then fills the 12-byte table record at the index with the byte value, the float and a full-scale level, and returns it. */
typedef struct { int value; int level; float amount; } Slot;
extern Slot D_003284A0[];
extern int func_0B4B98(int index);

Slot *func_0B4BB8(int index, unsigned char value, float amount)
{
    Slot *s;
    func_0B4B98(index);
    D_003284A0[index].value = value;
    s = &D_003284A0[index];
    s->amount = amount;
    D_003284A0[index].level = 0xFF;
    return s;
}
