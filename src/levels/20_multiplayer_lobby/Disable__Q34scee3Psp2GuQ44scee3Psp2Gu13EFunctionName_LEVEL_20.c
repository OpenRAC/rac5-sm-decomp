struct Holder { char pad[0x20d0]; unsigned int flags; };
extern struct Holder D_00177C50;

void Disable__Q34scee3Psp2GuQ44scee3Psp2Gu13EFunctionName(unsigned int bit)
{
    D_00177C50.flags &= ~(1u << bit);
}
