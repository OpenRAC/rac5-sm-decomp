/* LEVEL_02:0x050468 -- placement copy of LEVEL_03_0497A0.c. */
void func_050468(char *base)
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
