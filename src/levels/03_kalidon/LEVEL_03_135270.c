extern void func_1349D8();
extern void func_135308(void *level, int count, float factor);

void func_135270(char *level, float x, float y)
{
    char *object = *(char **)(level + 0x58);
    func_1349D8(level);
    func_135308(level, *(int *)(object + 0x48) + 1, y);
    *(float *)(level + 0x34) = x;
    *(float *)(object + 0x44) = 0.0833349973f;
    *(unsigned int *)(level + 0x64) |= 0x20;
    *(float *)(object + 0x0c) = 4.6667599678f;
    *(unsigned char *)(level + 0x45) = 1;
}

