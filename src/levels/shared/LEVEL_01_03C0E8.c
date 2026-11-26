/* LEVEL_01:0x03C0E8 -- replaces bit 47 of the 64-bit word at +0x960 with a flag. */
void func_03C0E8(char *object, unsigned int enabled)
{
    unsigned long long *word = (unsigned long long *)(object + 0x960);
    unsigned long long mask = ~(1ULL << 47);

    *word = (*word & mask) | (((unsigned long long)enabled & 1ULL) << 47);
}
