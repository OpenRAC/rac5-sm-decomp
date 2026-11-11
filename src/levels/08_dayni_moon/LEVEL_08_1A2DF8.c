extern void func_09F548(void *value);
extern void func_1A06C8(void *value);

void func_1A2DF8(char *owner, char *state, char *target)
{
    char *data = *(char **)(owner + 0x58);
    float first;
    float second;
    *(char **)(state + 0x110) = target + 0xec;
    *(float *)(state + 0x10c) = *(float *)(data + 0x190);
    if (*(float *)(data + 0x190) == 0.0f)
        func_09F548(state + 0xf0);
    func_1A06C8(state);
    first = (*(float *)(state + 0xec) + *(float *)(state + 0xe8) * 0.6666667f) * 0.5134171f;
    second = first + *(float *)(state + 0xe8) * 0.5134171f;
    *(float *)(state + 0xe8) = second;
    *(float *)(state + 0xec) = first - second * 0.6666667f;
}
