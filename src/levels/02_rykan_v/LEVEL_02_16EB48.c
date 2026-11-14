/* LEVEL_02:0x16EB48 -- sets the object's state byte to 2 and returns 3. */
int func_16EB48(char *object)
{
    *(unsigned char *)(object + 0x45) = 2;
    return 3;
}
