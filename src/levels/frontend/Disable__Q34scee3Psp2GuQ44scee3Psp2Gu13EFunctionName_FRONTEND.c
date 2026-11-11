/* FRONTEND:0x005DB8 -- placement copy of LEVEL_01_0A0928.c. */
struct Holder { char pad[0x20d0]; unsigned int flags; };
extern struct Holder D_0010C510;

void Disable__Q34scee3Psp2GuQ44scee3Psp2Gu13EFunctionName(unsigned int bit)
{
    D_0010C510.flags &= ~(1u << bit);
}
