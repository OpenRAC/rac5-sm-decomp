extern char *D_001A2C34;

int func_0279E0(unsigned int bit)
{
    return (*(unsigned int *)(D_001A2C34 + 0x1940) &
            (1u << bit)) > 0u;
}
