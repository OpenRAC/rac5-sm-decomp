struct Flags {
    char pad[0x20D0];
    unsigned int bits;
};

extern struct Flags D_001B4900;

void Enable__Q34scee3Psp2GuQ44scee3Psp2Gu13EFunctionName(int bit)
{
    D_001B4900.bits |= 1 << bit;
}
