/* LEVEL_01:0x144098 -- clears the field at +0x58 of the nested record and reports success. */
int func_144098(char *object)
{
    char *nested = *(char **)(object + 0x58);
    *(int *)(nested + 0x58) = 0;
    return 1;
}
