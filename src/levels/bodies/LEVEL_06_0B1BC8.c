struct Entry { char pad[8]; int field; char tail[0x2c]; };
extern struct Entry D_001EB828[];

void func_0B1BC8(int index)
{
    D_001EB828[index].field = 6;
}
