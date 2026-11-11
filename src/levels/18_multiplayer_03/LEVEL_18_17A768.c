/* LEVEL_18:0x17A768 -- picks 8 or 12 from two child flags; 12 when the first child flag is clear. */
int func_17A768(char *object)
{
    char *child;

    child = *(char **)(object + 0x58);
    if (*(unsigned char *)(*(char **)(object + 0x54) + 0x34) == 0) {
        return 12;
    }
    return *(unsigned char *)(child + 0xAF) == 0 ? 8 : 12;
}
