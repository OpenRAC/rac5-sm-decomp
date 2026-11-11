extern char *D_0020D12C;

int func_029E98(unsigned int bit)
{
    return (*(unsigned int *)(D_0020D12C + 0x1940) &
            (1u << bit)) > 0u;
}
