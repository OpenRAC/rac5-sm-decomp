struct Entry { char pad[0x818]; int value; char tail[8]; };
extern struct Entry D_002A5998[];

int func_0F2FF0(unsigned int index)
{
    if (index >= 8)
        return 8;
    return D_002A5998[index].value;
}
