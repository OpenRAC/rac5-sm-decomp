void func_132F90(char *object, unsigned char previous, unsigned char current)
{
    if (previous != current)
        *(unsigned char *)(object + 0x45) = current;
}
