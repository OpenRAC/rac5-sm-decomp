extern char *D_001C73AC;

int func_027F60(unsigned int bit)
{
    return (*(unsigned int *)(D_001C73AC + 0x1940) &
            (1u << bit)) > 0u;
}
