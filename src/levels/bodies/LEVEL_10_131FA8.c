struct Entry { char pad[0x818]; int value; char tail[8]; };
extern struct Entry D_00397A18[];

int func_131FA8(unsigned int index)
{
    if (index >= 8)
        return 8;
    return D_00397A18[index].value;
}
