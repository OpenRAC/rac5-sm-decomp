struct Entry { char pad[0x818]; int value; char tail[8]; };
extern struct Entry D_002E40F8[];

int func_10B5F8(unsigned int index)
{
    if (index >= 8)
        return 8;
    return D_002E40F8[index].value;
}
