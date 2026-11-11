/* LEVEL_01:0x1357D8 -- clears the byte at +0x10 of the object. */
void func_1357D8(char *object)
{
    *(object + 0x10) = 0;
}
