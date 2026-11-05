struct Entry { char pad[8]; int field; char tail[0x2c]; };
extern struct Entry D_00214FA8[];

void func_0B70E0(int index)
{
    D_00214FA8[index].field = 6;
}
