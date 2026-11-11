/* LEVEL_01:0x08C420 -- stores a value into the field at +0x10 of the object. */
void func_08C420(char *object, int value)
{
    *(int *)(object + 0x10) = value;
}
