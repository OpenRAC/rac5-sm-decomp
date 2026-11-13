/* USA LEVEL_16.REL:0x022170, 88-byte candidate.
 * Measured pinned/gnu-ee-trial: 84 linked bytes; first differing word +0x0.
 * Recover the observed types and lifetimes before retrying the same mismatch class.
 */
typedef struct Entry Entry;
typedef struct { char pad[16]; Entry *field[11]; int selection; char tail[20]; } Cell;
extern Cell D_0019F078[];
Entry *func_022170(unsigned int slot, unsigned int index, int subslot)
{
    subslot = (int)((unsigned int)subslot + 1U);
    if (slot < 25U && subslot >= 0 && subslot < 6) {
        Cell *cells = &D_0019F078[slot * 5];
        return cells[subslot].field[index];
    }
    return 0;
}
