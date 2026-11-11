extern void func_142A88();
extern void func_1433B8(void *level, int count, float factor);

void func_143320(char *level, float x, float y)
{
    char *object = *(char **)(level + 0x58);
    func_142A88(level);
    func_1433B8(level, *(int *)(object + 0x48) + 1, y);
    *(float *)(level + 0x34) = x;
    *(float *)(object + 0x44) = 0.0833349973f;
    *(unsigned int *)(level + 0x64) |= 0x20;
    *(float *)(object + 0x0c) = 4.6667599678f;
    *(unsigned char *)(level + 0x45) = 1;
}

