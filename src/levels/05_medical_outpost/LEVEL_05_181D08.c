/* LEVEL_05:0x181D08 -- clears the field at +0x54 of the nested record and reports success. */
int func_181D08(char *object)
{
    char *nested = *(char **)(object + 0x58);
    *(int *)(nested + 0x54) = 0;
    return 1;
}
