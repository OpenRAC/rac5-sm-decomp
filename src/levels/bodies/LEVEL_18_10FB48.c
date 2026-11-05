struct Entry { char pad[0x818]; int value; char tail[8]; };
extern struct Entry D_002DC838[];

int func_10FB48(unsigned int index)
{
    if (index >= 8)
        return 8;
    return D_002DC838[index].value;
}
