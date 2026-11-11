struct Entry { char pad[0x818]; int value; char tail[8]; };
extern struct Entry D_003A5B18[];

int func_13A4D8(unsigned int index)
{
    if (index >= 8)
        return 8;
    return D_003A5B18[index].value;
}
