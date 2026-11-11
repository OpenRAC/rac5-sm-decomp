struct Entry { char pad[8]; int field; char tail[0x2c]; };
extern struct Entry D_001E6728[];

void func_0B45A8(int index, unsigned int value)
{
    D_001E6728[index].field = 6;
}
