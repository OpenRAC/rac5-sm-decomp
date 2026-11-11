/* LEVEL_19:0x0A5BF0 -- placement copy of LEVEL_01_0B72F8.c. */
struct Entry { char pad[8]; int field; char tail[0x2c]; };
extern struct Entry D_001ABB28[];

void func_0A5BF0(int index, unsigned int value)
{
    D_001ABB28[index].field = 6;
}
