struct Entry { char pad[8]; int field; char tail[0x2c]; };
extern struct Entry D_0015BCA8[];

void func_0A5848(int index)
{
    D_0015BCA8[index].field = 6;
}
