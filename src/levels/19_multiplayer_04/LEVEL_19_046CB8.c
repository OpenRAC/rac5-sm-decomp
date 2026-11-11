extern int func_113E10(int a0);

int func_046CB8(char *a0, int a1, int a2)
{
    float v;

    if (a2 == 0 && *(int *)(a0 + 0xFC8) == a1) {
        return 0;
    }
    *(int *)(a0 + 0xFC8) = a1;
    v = (float)(unsigned int)func_113E10(a1);
    *(float *)(a0 + 0x970) = v;
    *(float *)(a0 + 0x96C) = v;
    return 1;
}
