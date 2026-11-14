/* LEVEL_22:0x10FD70 -- shifts the four paired offsets of the object's block by the global base, marks it ready, rescales the float at +0x34 and returns 1. */
extern int D_00165D74;

int func_10FD70(char *object)
{
    int *block;
    int *p;
    unsigned int i;

    block = *(int **)(object + 0x54);
    p = block;
    for (i = 0; i < 4; i++) {
        if (p[0] != 0) {
            p[0] = D_00165D74 + p[0];
        }
        if (p[4] != 0) {
            p[4] = D_00165D74 + p[4];
        }
        p++;
    }
    *(unsigned char *)(object + 0x45) = 1;
    *(float *)(block + 0xD) = *(float *)(block + 0xD) * 0.5f * 60.0f * 0.03333333507180214f;
    return 1;
}
