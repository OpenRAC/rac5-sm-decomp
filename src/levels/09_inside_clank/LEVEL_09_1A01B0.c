/* LEVEL_09:0x1A01B0 -- returns 10 or 6 from two byte flags reached through pointer fields. */
int func_1A01B0(char *object)
{
    char *second;
    second = *(char **)(object + 0x58);
    if (*(unsigned char *)(*(char **)(object + 0x54) + 0x44) == 0)
        return 10;
    return *(unsigned char *)(second + 0xAD) == 0 ? 6 : 10;
}
