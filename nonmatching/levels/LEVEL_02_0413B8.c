/* LEVEL_02.REL:0x0413B8: reviewed 148-byte candidate.
 * pinned C with ps2eeas links 152 bytes; first differs at +6.
 * Retry: Change the measured source/compiler hypothesis; representative still
 * differs.
 * No matching credit.
 */
void func_0413B8(char *object)
{
    unsigned long *flags = (unsigned long *)(object + 0x960);
    unsigned long *other = (unsigned long *)(object + 0x968);
    unsigned long value = *flags;
    unsigned long target;
    value &= ~(1UL << 37);
    value &= ~(1UL << 39);
    target = *other;
    value &= ~(1UL << 38);
    target = (target & ~1UL) | ((value >> 40) & 1UL);
    value &= ~(1UL << 40);
    value &= ~(1UL << 44);
    *other = target;
    *flags = value;
    *(unsigned int *)(object + 0x274) = 0;
    *(unsigned char *)(object + 0x9e8) = 0;
}
