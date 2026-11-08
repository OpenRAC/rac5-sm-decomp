struct Entry { char pad[8]; int field; char tail[0x2c]; };
extern struct Entry D_002118E8[];

void func_0BDC08(int index, unsigned int value)
{
    D_002118E8[index].field = 6;
}
