/* LEVEL_01.REL:0x0277E8, bounded 176-byte candidate.
 * Isolated pinned C object: 164 bytes; first linked
 * difference at body byte +5. Not linked into the accepted
 * gate or counted.
 * Reopen: $t0/$t1 are inverted between the value and the index; the loop and memcpy are otherwise correct. Reopen by swapping the operand creation order.
 */
extern int *D_001F3FAC;
extern void *memcpy(void *dst, const void *src, unsigned int n);

int func_000277E8(int value)
{
    unsigned int i;

    i = 0;
    do {
        unsigned int next = i + 1;

        if (D_001F3FAC[i + 0x20] == value) {
            if (D_001F3FAC[0x39] != next) {
                memcpy(&D_001F3FAC[i + 0x20], &D_001F3FAC[i + 0x21],
                       (D_001F3FAC[0x39] - i) - 1);
                D_001F3FAC[0x39] = D_001F3FAC[0x39] - 1;
                D_001F3FAC[D_001F3FAC[0x39] + 0x20] = -1;
                return 1;
            }
        }
        i = next;
    } while (i < 0x19);
    return 0;
}
