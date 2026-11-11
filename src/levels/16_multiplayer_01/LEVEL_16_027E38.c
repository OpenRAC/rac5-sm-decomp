extern char *D_001A1AB4;

int func_027E38(unsigned int bit)
{
    return (*(unsigned int *)(D_001A1AB4 + 0x1940) &
            (1u << bit)) > 0u;
}
