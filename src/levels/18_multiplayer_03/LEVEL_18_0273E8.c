extern char *D_001A2F34;

int func_0273E8(unsigned int bit)
{
    return (*(unsigned int *)(D_001A2F34 + 0x1940) &
            (1u << bit)) > 0u;
}
