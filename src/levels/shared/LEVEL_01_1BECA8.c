/* LEVEL_01:0x1BECA8 -- latches the object's anchor values: from the model's last edge when the object is in state 1, otherwise from its own position and direction. */
static __inline__ void SetAnchor(float *out, float x, float z, float dx, float dz)
{
    out[0] = x;
    out[1] = z;
    out[2] = dx;
    out[3] = dz;
}

void func_1BECA8(unsigned char *object)
{
    char *resource = *(char **)(object + 0x54);
    char *state = *(char **)(object + 0x58);
    float delta[2];

    if (object[0x45] == 1) {
        char *model = *(char **)(resource + 0x40);
        unsigned int n = *(unsigned short *)(model + 0x14) << 4;
        float *b = (float *)(*(char **)(model + 4) + (n - 16));
        float *a = (float *)(*(char **)(model + 4) + (n - 32));

        delta[0] = b[0] - a[0];
        delta[1] = b[2] - a[2];
        SetAnchor((float *)(state + 0x24), b[0], b[2], delta[0], delta[1]);
        state[0x7A] = 10;
    } else {
        SetAnchor((float *)(state + 0x24), *(float *)(object + 0x30), *(float *)(object + 0x38),
                  *(float *)(object + 0x20), *(float *)(object + 0x28));
        if (object[0x45] == 4)
            state[0x7A] = 28;
        else
            state[0x7A] = 10;
    }
}
