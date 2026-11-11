extern char *D_00104194;

int func_024940(unsigned int bit)
{
    return (*(unsigned int *)(D_00104194 + 0x1940) &
            (1u << bit)) > 0u;
}
