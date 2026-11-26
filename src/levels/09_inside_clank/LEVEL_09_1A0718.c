/* LEVEL_09:0x1A0718 -- reports whether the linked record flag is set or the object is in state 11 or 14. */
int func_1A0718(char *object)
{
    unsigned char state = *(unsigned char *)(object + 0x45);
    int result = *(unsigned char *)(*(char **)(object + 0x54) + 0x47) != 0;

    if (state == 14)
        result = result | 1;
    if (state == 11)
        result = result | 1;
    return result;
}
