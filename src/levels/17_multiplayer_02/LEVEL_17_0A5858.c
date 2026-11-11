/* LEVEL_17:0x0A5858 -- placement copy of LEVEL_01_0B72F8.c. */
struct Entry { char pad[8]; int field; char tail[0x2c]; };
extern struct Entry D_0019DFA8[];

void func_0A5858(int index, unsigned int value)
{
    D_0019DFA8[index].field = 6;
}
