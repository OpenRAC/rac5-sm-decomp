struct Entry { char pad[8]; int field; char tail[0x2c]; };
extern struct Entry D_001EBCA8[];

void func_0B58A0(int index, unsigned int value)
{
    D_001EBCA8[index].field = 6;
}
