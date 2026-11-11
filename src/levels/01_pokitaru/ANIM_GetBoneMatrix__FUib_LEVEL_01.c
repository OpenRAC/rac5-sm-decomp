extern char *D_0023F034;
extern char *D_001F6274;

char *ANIM_GetBoneMatrix__FUib(unsigned int index, int enabled)
{
    if (enabled != 0) {
        char *lookup = *(char **)(D_0023F034 + 0x14);
        if (lookup != 0)
            index = (unsigned char)lookup[index];
    }
    return D_001F6274 + index * 0x40;
}
