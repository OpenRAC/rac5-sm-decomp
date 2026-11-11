extern int func_0E61D8(int a0);

int func_041B48(char *a0, int a1, int a2)
{
    float v;

    if (a2 == 0 && *(int *)(a0 + 0xFC8) == a1) {
        return 0;
    }
    *(int *)(a0 + 0xFC8) = a1;
    v = (float)(unsigned int)func_0E61D8(a1);
    *(float *)(a0 + 0x970) = v;
    *(float *)(a0 + 0x96C) = v;
    return 1;
}
