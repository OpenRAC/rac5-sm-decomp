/* USA LEVEL_01.REL:0x0B7FA8, 108-byte candidate (14 November 2026).
 * Measured pinned: 23 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct { int state; char pad04[8]; int pending; char pad10[0x1C]; float f2C; char pad30[8]; } Slot;
extern Slot D_001FC928[];
extern void func_0B7350(Slot *s);

void func_0B7FA8(int index)
{
    Slot *s = &D_001FC928[index];

    func_0B7350(s);
    s->state = s->pending;
}
