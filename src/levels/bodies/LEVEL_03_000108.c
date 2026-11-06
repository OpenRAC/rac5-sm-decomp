extern int D_00207808[];
unsigned int func_000108(int index)
{
    if (index < 8) {
        if (index != 0)
            goto valid;
    }
    return 0xffffffffu;
valid:
    return D_00207808[index - 1];
}