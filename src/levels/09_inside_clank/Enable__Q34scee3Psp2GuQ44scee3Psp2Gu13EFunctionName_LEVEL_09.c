struct Flags {
    char pad[0x20D0];
    unsigned int bits;
};

extern struct Flags D_00284040;

void Enable__Q34scee3Psp2GuQ44scee3Psp2Gu13EFunctionName(int bit)
{
    D_00284040.bits |= 1 << bit;
}
