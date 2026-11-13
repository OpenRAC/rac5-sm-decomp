/* USA LEVEL_01.REL:0x1BECA8, 200-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 188 linked bytes; first differing word +0x0.
 * Unaccepted; no matching credit. Recover the vector helper ABI and prove the model has at least two entries. A returned pair creates a larger frame rather than the retail temporary.
 */
void func_1BECA8(char *object)
{
    char *resource = *(char **)(object + 0x54);
    char *state = *(char **)(object + 0x58);
    float *out = (float *)(state + 0x24);
    if ((unsigned char)object[0x45] == 1) {
        char *model = *(char **)(resource + 0x40);
        unsigned int count = *(unsigned short *)(model + 0x14);
        float *a = (float *)(*(char **)(model + 4) + count * 16 - 32);
        float *b = (float *)(*(char **)(model + 4) + count * 16 - 16);
        float delta[2];
        delta[0] = b[0] - a[0];
        delta[1] = b[2] - a[2];
        out[0] = b[0];
        out[3] = delta[1];
        out[1] = b[2];
        out[2] = delta[0];
        state[0x7A] = 10;
    } else {
        float x = *(float *)(object + 0x30);
        float z = *(float *)(object + 0x38);
        float dx = *(float *)(object + 0x20);
        float dz = *(float *)(object + 0x28);
        out[0] = x;
        out[3] = dz;
        out[1] = z;
        out[2] = dx;
        state[0x7A] = (unsigned char)object[0x45] == 4 ? 28 : 10;
    }
}
