/* LEVEL_18:0x0A52F0 -- placement copy of LEVEL_01_0B72F8.c. */
struct Entry { char pad[8]; int field; char tail[0x2c]; };
extern struct Entry D_001ABE28[];

void func_0A52F0(int index, unsigned int value)
{
    D_001ABE28[index].field = 6;
}
