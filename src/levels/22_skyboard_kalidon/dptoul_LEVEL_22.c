typedef struct {
    unsigned int mode;
    int flag;
    int shift;
    int pad;
    unsigned long long value;
} Params;

extern void func_149960(void *input, Params *output);

unsigned int dptoul(long long argument)
{
    long long input;
    Params params;

    input = argument;
    func_149960(&input, &params);
    if ((params.mode ^ 2) == 0)
        return 0;
    if (params.mode < 2)
        return 0;
    if (params.flag != 0)
        return 0;
    if ((params.mode ^ 4) == 0)
        return -1;
    if (params.shift < 0)
        return 0;
    if (params.shift >= 0x20)
        return -1;
    if (params.shift < 0x3D)
        return (int)(params.value >> (0x3c - params.shift));
    return (int)(params.value << (params.shift - 0x3c));
}
