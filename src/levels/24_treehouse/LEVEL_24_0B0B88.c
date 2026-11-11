struct Entry { char pad[8]; int field; char tail[0x2c]; };
extern struct Entry D_001CD5A8[];

void func_0B0B88(int index, unsigned int value)
{
    D_001CD5A8[index].field = 6;
}
