extern char *D_00194C34;
extern char *D_001555F4;

char *ANIM_GetBoneMatrix__FUib(unsigned int index, int enabled)
{
    if (enabled != 0) {
        char *lookup = *(char **)(D_00194C34 + 0x14);
        if (lookup != 0)
            index = (unsigned char)lookup[index];
    }
    return D_001555F4 + index * 0x40;
}
