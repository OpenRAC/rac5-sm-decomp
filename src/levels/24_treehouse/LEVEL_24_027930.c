extern char *D_001C4C2C;

int func_027930(unsigned int bit)
{
    return (*(unsigned int *)(D_001C4C2C + 0x1940) &
            (1u << bit)) > 0u;
}
