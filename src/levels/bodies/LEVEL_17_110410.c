struct Entry { char pad[0x818]; int value; char tail[8]; };
extern struct Entry D_002CD7B8[];

int func_110410(unsigned int index)
{
    if (index >= 8)
        return 8;
    return D_002CD7B8[index].value;
}
