extern void func_134450();
extern void func_134D80(void *level, int count, float factor);

void func_134CE8(char *level, float x, float y)
{
    char *object = *(char **)(level + 0x58);
    func_134450(level);
    func_134D80(level, *(int *)(object + 0x48) + 1, y);
    *(float *)(level + 0x34) = x;
    *(float *)(object + 0x44) = 0.0833349973f;
    *(unsigned int *)(level + 0x64) |= 0x20;
    *(float *)(object + 0x0c) = 4.6667599678f;
    *(unsigned char *)(level + 0x45) = 1;
}

