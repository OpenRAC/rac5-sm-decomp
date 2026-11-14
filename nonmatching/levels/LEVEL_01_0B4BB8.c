/* USA LEVEL_01.REL:0x0B4BB8, 104-byte candidate (14 November 2026).
 * Measured gnu-ee-trial: 9 differing words; first difference at 0x34.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int value;
    int level;
    float amount;
} Slot;

extern Slot D_003284A0[];
extern int func_0B4B98(int index);

Slot *func_0B4BB8(int index, unsigned char value, float amount)
{
    Slot *s;

    func_0B4B98(index);
    D_003284A0[index].value = value;
    s = &D_003284A0[index];
    s->amount = amount;
    s->level = 0xFF;
    return s;
}
