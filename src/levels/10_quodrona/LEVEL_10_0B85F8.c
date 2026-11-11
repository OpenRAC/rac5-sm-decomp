struct Entry { char pad[8]; int field; char tail[0x2c]; };
extern struct Entry D_00205928[];

void func_0B85F8(int index, unsigned int value)
{
    D_00205928[index].field = 6;
}
