extern char *D_001E332C;

int func_029068(unsigned int bit)
{
    return (*(unsigned int *)(D_001E332C + 0x1940) &
            (1u << bit)) > 0u;
}
