extern char *D_0020AF34;
extern char *D_001C6EF4;

char *ANIM_GetBoneMatrix__FUib(unsigned int index, int enabled)
{
    if (enabled != 0) {
        char *lookup = *(char **)(D_0020AF34 + 0x14);
        if (lookup != 0)
            index = (unsigned char)lookup[index];
    }
    return D_001C6EF4 + index * 0x40;
}
