extern char *D_0020C62C;

int func_02A1E8(unsigned int bit)
{
    return (*(unsigned int *)(D_0020C62C + 0x1940) &
            (1u << bit)) > 0u;
}
