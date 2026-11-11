extern char *D_002082AC;

int func_02A730(unsigned int bit)
{
    return (*(unsigned int *)(D_002082AC + 0x1940) &
            (1u << bit)) > 0u;
}
