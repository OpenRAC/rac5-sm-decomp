struct Holder { char pad[0x20d0]; unsigned int flags; };
extern struct Holder D_002A5CC0;

void Disable__Q34scee3Psp2GuQ44scee3Psp2Gu13EFunctionName(unsigned int bit)
{
    D_002A5CC0.flags &= ~(1u << bit);
}
