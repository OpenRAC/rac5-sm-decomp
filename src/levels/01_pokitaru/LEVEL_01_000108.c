extern int D_001EF188[];
unsigned int func_000108(int index)
{
    if (index < 8) {
        if (index != 0)
            goto valid;
    }
    return 0xffffffffu;
valid:
    return D_001EF188[index - 1];
}