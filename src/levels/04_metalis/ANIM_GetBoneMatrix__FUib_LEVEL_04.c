extern char *D_00259834;
extern char *D_0020F734;

char *ANIM_GetBoneMatrix__FUib(unsigned int index, int enabled)
{
    if (enabled != 0) {
        char *lookup = *(char **)(D_00259834 + 0x14);
        if (lookup != 0)
            index = (unsigned char)lookup[index];
    }
    return D_0020F734 + index * 0x40;
}
