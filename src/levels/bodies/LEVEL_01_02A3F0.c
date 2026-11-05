extern char *D_001F3FAC;

int func_02A3F0(unsigned int bit)
{
    return (*(unsigned int *)(D_001F3FAC + 0x1940) &
            (1u << bit)) > 0u;
}
