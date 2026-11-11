struct Entry { char pad[0x818]; int value; char tail[8]; };
extern struct Entry D_0037B398[];

int func_12A7F8(unsigned int index)
{
    if (index >= 8)
        return 8;
    return D_0037B398[index].value;
}
