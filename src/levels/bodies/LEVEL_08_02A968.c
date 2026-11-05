extern char *D_0023CB2C;

int func_02A968(unsigned int bit)
{
    return (*(unsigned int *)(D_0023CB2C + 0x1940) &
            (1u << bit)) > 0u;
}
