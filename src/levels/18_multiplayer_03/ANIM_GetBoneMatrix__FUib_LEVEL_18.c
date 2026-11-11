extern char *D_001F5834;
extern char *D_001A5724;

char *ANIM_GetBoneMatrix__FUib(unsigned int index, int enabled)
{
    if (enabled != 0) {
        char *lookup = *(char **)(D_001F5834 + 0x14);
        if (lookup != 0)
            index = (unsigned char)lookup[index];
    }
    return D_001A5724 + index * 0x40;
}
