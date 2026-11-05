struct Entry { char pad[0x818]; int value; char tail[8]; };
extern struct Entry D_003A3F18[];

int func_137128(unsigned int index)
{
    if (index >= 8)
        return 8;
    return D_003A3F18[index].value;
}
