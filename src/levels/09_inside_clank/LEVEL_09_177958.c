extern void func_0797A8(void *, int, int, int, float, float);

void func_177958(char *state)
{
    int stage = (unsigned char)state[0x46];

    switch (stage) {
    case 0:
        return;
    case 1:
        *(float *)(*(char **)(state + 0x58) + 0x264) = -0.16666667f;
        return;
    case 2: {
        char *node = *(char **)(state + 0x58);
        char *object = *(char **)node;
        *(unsigned int *)(state + 0x64) &= ~0x40000U;
        *(int *)(object + 0xFEC) = 0;
        *(float *)(node + 0x264) = -0.16666667f;
        func_0797A8(state, 0, 0, 1, 0.1f, 0.0f);
        return;
    }
    default:
        return;
    }
}
