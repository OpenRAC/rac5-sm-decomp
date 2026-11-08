struct Entry { char pad[8]; int field; char tail[0x2c]; };
extern struct Entry D_002457E8[];

void func_0C21E8(int index, unsigned int value)
{
    D_002457E8[index].field = 6;
}
