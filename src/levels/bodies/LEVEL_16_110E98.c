struct Entry { char pad[0x818]; int value; char tail[8]; };
extern struct Entry D_002DC4B8[];

int func_110E98(unsigned int index)
{
    if (index >= 8)
        return 8;
    return D_002DC4B8[index].value;
}
