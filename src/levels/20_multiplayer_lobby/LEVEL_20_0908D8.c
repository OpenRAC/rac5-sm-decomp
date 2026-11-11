/* LEVEL_20:0x0908D8 -- placement copy of LEVEL_01_0B72F8.c. */
struct Entry { char pad[8]; int field; char tail[0x2c]; };
extern struct Entry D_0010D088[];

void func_0908D8(int index, unsigned int value)
{
    D_0010D088[index].field = 6;
}
