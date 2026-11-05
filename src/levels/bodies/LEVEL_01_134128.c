struct Entry { char pad[0x818]; int value; char tail[8]; };
extern struct Entry D_0038E618[];

int func_134128(unsigned int index)
{
    if (index >= 8)
        return 8;
    return D_0038E618[index].value;
}
