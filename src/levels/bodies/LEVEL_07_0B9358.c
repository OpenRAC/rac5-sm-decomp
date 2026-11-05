struct Entry { char pad[8]; int field; char tail[0x2c]; };
extern struct Entry D_00210C28[];

void func_0B9358(int index)
{
    D_00210C28[index].field = 6;
}
