extern void func_125AF0();
extern void func_126440(void *level, int count, float factor);

void func_1263A8(char *level, float x, float y)
{
    char *object = *(char **)(level + 0x58);
    func_125AF0(level);
    func_126440(level, *(int *)(object + 0x48) + 1, y);
    *(float *)(level + 0x34) = x;
    *(float *)(object + 0x44) = 0.0833349973f;
    *(unsigned int *)(level + 0x64) |= 0x20;
    *(float *)(object + 0x0c) = 4.6667599678f;
    *(unsigned char *)(level + 0x45) = 1;
}

