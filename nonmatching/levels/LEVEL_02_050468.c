/* LEVEL_02.REL:0x050468, bounded 192-byte candidate.
 * Isolated pinned C object: 216 bytes; first linked
 * difference at body byte +5. Not linked into the accepted
 * gate or counted.
 * Reopen: The retail builds each ~(1<<n) separately. Reopen by writing the bit clears one at a time in the measured order (33, 32, 48, 49, 54) before setting bit 47.
 */
void func_00050468(char *base)
{
    unsigned long long f960 = *(unsigned long long *)(base + 0x960);
    unsigned long long f968 = *(unsigned long long *)(base + 0x968);

    f960 &= ~(1ULL << 33);
    f960 &= ~(1ULL << 32);
    f960 &= ~(1ULL << 48);
    f960 &= ~(1ULL << 49);
    f960 |= 1ULL << 47;
    f960 &= ~(1ULL << 54);
    f968 |= 8;
    f968 &= ~(1ULL << 4);
    f968 &= ~(1ULL << 6);
    *(unsigned long long *)(base + 0x960) = f960;
    *(unsigned long long *)(base + 0x968) = f968;
}
