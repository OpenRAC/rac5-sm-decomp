/* LEVEL_01.REL:0x0B5868, bounded 172-byte candidate.
 * Isolated pinned C object: 172 bytes; first linked difference
 * at body byte +84. Not linked into the accepted gate or counted.
 * Reopen: Middle and tail are byte-identical through body byte 84. The only difference is the order of four instructions in the clamp block (`sll`, `addiu %lo`, `addiu 0xFF`, `addu`). Reopen with an expression that forces a fresh %hi expansion of D2 before it is CSE'd into a2, or confirm a cc1 version difference for `x > 0xff`.
 */
extern int D_001FC6B0[64];
extern int D_001FC6B8[64];
extern int D_003285A0[64];

void func_000B5868(int index)
{
    int level;
    int value;
    int *out;
    int *slot;

    if (D_001FC6B0[index] != 0) {
        D_001FC6B0[index] = D_001FC6B0[index] - 1;
    }
    level = D_001FC6B0[index];
    out = &D_001FC6B8[index];
    if (level == 0) {
        *out = *out - 8;
    } else {
        *out = *out + 8;
    }
    {
        int max = 0xff;
        if (D_001FC6B8[index] > max) {
            D_001FC6B8[index] = max;
        }
    }
    if (D_001FC6B8[index] < 0) {
        D_001FC6B8[index] = 0;
    }
    slot = &D_003285A0[index];
    value = 0;
    if (D_001FC6B0[index] != 0) {
        value = *slot;
    }
    *slot = value;
}
