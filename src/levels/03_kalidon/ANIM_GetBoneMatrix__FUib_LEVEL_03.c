extern char *D_00259EB4;
extern char *D_0020E8F4;

char *ANIM_GetBoneMatrix__FUib(unsigned int index, int enabled)
{
    if (enabled != 0) {
        char *lookup = *(char **)(D_00259EB4 + 0x14);
        if (lookup != 0)
            index = (unsigned char)lookup[index];
    }
    return D_0020E8F4 + index * 0x40;
}
