struct Holder { char pad[0x20d0]; unsigned int flags; };
extern struct Holder D_0026DD00;

void Disable__Q34scee3Psp2GuQ44scee3Psp2Gu13EFunctionName(unsigned int bit)
{
    D_0026DD00.flags &= ~(1u << bit);
}
