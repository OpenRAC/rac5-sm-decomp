extern int D_0019AC08[];
unsigned int func_000108(int index)
{
    if (index < 8) {
        if (index != 0)
            goto valid;
    }
    return 0xffffffffu;
valid:
    return D_0019AC08[index - 1];
}