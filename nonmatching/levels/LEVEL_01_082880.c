/* USA LEVEL_01:082880, 136-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 136 bytes: 15 differing words; first difference +0x0. No matching credit.
 * Remaining issue: conditional-move operand tie: unsigned nibble + inline Bump(v, max) with the
 * limit as a parameter now gives retail 14-in-register sltu and the movn/movz select (23 -> 15
 * words); retail ties the result to v+1 and moves the original value (a1) in with movn, ours
 * ties it to a copy of v and moves v+1 in with movz, so the index/value copies sit in t0/a3
 * instead of t1/t0; ~20 select forms (if/else, return, pointer helpers, split predicates) and
 * profiles tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x082880 -- writes a clamped nibble into a packed 4-bit table entry. */
extern int D_0021A7F0;
extern unsigned char *D_001F3FAC;
static __inline__ unsigned int Bump(unsigned int v, unsigned int max)
{
    unsigned int r;

    r = v + 1;
    if (v > max)
        r = v;
    return r;
}

void func_082880(unsigned int index, unsigned int value)
{
    unsigned char *entry;
    unsigned int nibble;

    if (index >= 0x400)
        return;
    nibble = Bump(value, 0xe);
    entry = D_001F3FAC + (D_0021A7F0 * 0x200 + 0x10520);
    entry += index >> 1;
    if (index & 1)
        *entry = (*entry & 0x0f) | (nibble << 4);
    else
        *entry = (*entry & 0xf0) | nibble;
}
