/* LEVEL_01.REL:0x02E488, bounded 164-byte candidate.
 * Isolated pinned C object: 164 bytes; first linked difference
 * at body byte +70. Not linked into the accepted gate or counted.
 * Reopen: Every byte is identical through body byte 70. Only the rt field of the second `addiu $aX,$zero,0x1F` differs ($a0 instead of $a2), and the rest follows from that allocation. Reopen with a form that keeps the table pointer live in $a0 until the final call.
 */
extern void func_0002E530(int *table);

void func_0002E488(int *table, int value, unsigned int first, int other, unsigned int second, int extra)
{
    unsigned int shift1;
    unsigned int shift2;
    unsigned int ok;
    int power;

    shift1 = 0x1f;
    ok = (first >> 0x1f) ^ 1;
    if (ok) {
        do {
            shift1--;
        } while (shift1 != 0 && (((first >> shift1) ^ 1) & 1));
    }
    shift2 = 0x1f;
    ok = (second >> 0x1f) ^ 1;
    if (ok) {
        do {
            shift2--;
        } while (shift2 != 0 && (((second >> shift2) ^ 1) & 1));
    }
    table[0] = value;
    power = 1 << shift1;
    table[6] = other;
    table[3] = power;
    table[2] = power - 1;
    table[7] = shift2;
    table[8] = extra;
    table[1] = shift1;
    func_0002E530(table);
}
