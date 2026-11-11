struct Entry { char pad[8]; int field; char tail[0x2c]; };
extern struct Entry D_00215DE8[];

void func_0BCB00(int index, unsigned int value)
{
    D_00215DE8[index].field = 6;
}
