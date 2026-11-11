void func_1A24C0(char *object)
{
    char *child = *(char **)(object + 0x54);
    float *source = (float *)(object + 0x30);
    float *target = (float *)(child + 0x40);
    target[0] = source[0];
    target[1] = source[1];
    target[2] = source[2];
    *(unsigned char *)(child + 0xB0) = 0;
}
