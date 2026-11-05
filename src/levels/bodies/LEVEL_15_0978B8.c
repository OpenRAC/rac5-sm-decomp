struct Entry { char pad[8]; int field; char tail[0x2c]; };
extern struct Entry D_001515A8[];

void func_0978B8(int index)
{
    D_001515A8[index].field = 6;
}
