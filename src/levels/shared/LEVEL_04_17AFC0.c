/* LEVEL_04:0x17AFC0 -- sets the object's state byte to 2 and returns 1. */
int func_17AFC0(char *object)
{
    *(unsigned char *)(object + 0x45) = 2;
    return 1;
}
