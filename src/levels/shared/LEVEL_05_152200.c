void func_152200(char *object)
{
    char *child = *(char **)(object + 0x54);
    *(unsigned char *)(object + 0x45) = 2;
    *(unsigned int *)(child + 0x18) = *(unsigned char *)(child + 0x1D);
}
