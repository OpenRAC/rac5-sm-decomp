extern char *D_00248434;
extern char *D_001FF274;

char *ANIM_GetBoneMatrix__FUib(unsigned int index, int enabled)
{
    if (enabled != 0) {
        char *lookup = *(char **)(D_00248434 + 0x14);
        if (lookup != 0)
            index = (unsigned char)lookup[index];
    }
    return D_001FF274 + index * 0x40;
}
