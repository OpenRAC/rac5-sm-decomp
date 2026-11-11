struct Entry { char pad[8]; int field; char tail[0x2c]; };
extern struct Entry D_001FC928[];

void func_0B72F8(int index, unsigned int value)
{
    D_001FC928[index].field = 6;
}
