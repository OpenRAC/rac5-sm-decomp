/* LEVEL_16:0x0A6358 -- placement copy of LEVEL_01_0B72F8.c. */
struct Entry { char pad[8]; int field; char tail[0x2c]; };
extern struct Entry D_001AA9A8[];

void func_0A6358(int index, unsigned int value)
{
    D_001AA9A8[index].field = 6;
}
