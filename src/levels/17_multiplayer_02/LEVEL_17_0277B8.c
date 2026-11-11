extern char *D_001950B4;

int func_0277B8(unsigned int bit)
{
    return (*(unsigned int *)(D_001950B4 + 0x1940) &
            (1u << bit)) > 0u;
}
