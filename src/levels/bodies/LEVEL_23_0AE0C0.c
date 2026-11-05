struct Entry { char pad[8]; int field; char tail[0x2c]; };
extern struct Entry D_001CFD28[];

void func_0AE0C0(int index)
{
    D_001CFD28[index].field = 6;
}
