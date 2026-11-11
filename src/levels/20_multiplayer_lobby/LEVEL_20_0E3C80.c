struct Entry { char pad[0x818]; int value; char tail[8]; };
extern struct Entry D_001FFA18[];

int func_0E3C80(unsigned int index)
{
    if (index >= 8)
        return 8;
    return D_001FFA18[index].value;
}
