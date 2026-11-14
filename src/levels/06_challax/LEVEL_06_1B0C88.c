/* LEVEL_06:0x1B0C88 -- sets the state byte of the object's attached record to 3. */
void func_1B0C88(char *object)
{
    char *child = *(char **)(object + 0x58);
    *(unsigned char *)(child + 0x94) = 3;
}
