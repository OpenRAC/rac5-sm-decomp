struct Entry { char pad[0x818]; int value; char tail[8]; };
extern struct Entry D_00375D98[];

int func_12D0C0(unsigned int index)
{
    if (index >= 8)
        return 8;
    return D_00375D98[index].value;
}
