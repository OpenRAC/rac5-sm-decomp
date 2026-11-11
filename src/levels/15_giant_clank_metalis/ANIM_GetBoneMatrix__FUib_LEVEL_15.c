extern char *D_001870B4;
extern char *D_0014AEF4;

char *ANIM_GetBoneMatrix__FUib(unsigned int index, int enabled)
{
    if (enabled != 0) {
        char *lookup = *(char **)(D_001870B4 + 0x14);
        if (lookup != 0)
            index = (unsigned char)lookup[index];
    }
    return D_0014AEF4 + index * 0x40;
}
