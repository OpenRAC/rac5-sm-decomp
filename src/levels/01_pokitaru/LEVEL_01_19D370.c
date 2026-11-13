extern void func_1DB820(unsigned int *record);
extern void func_0DDC40(float scale, char *out, unsigned int color);
extern void func_0809D0(char *object, char *listener, float a, float b, float c, float d, char *e, int f, int g, int h, int i, int j);
extern char *D_20896C;
void func_19D370(char *object, char *argument)
{
    unsigned int record[2];
    char *resource = *(char **)(object + 0x54);
    char *state = *(char **)(object + 0x58);
    record[0] = *(unsigned int *)(argument + 0x59C);
    record[1] = 0xFFFF8080U;
    func_1DB820(record);
    func_0DDC40(1.5f, state + 0x28, 0xFF8080U);
    if (D_20896C)
        func_0809D0(object, D_20896C, *(float *)(D_20896C + 0x14), *(float *)(D_20896C + 0x18), *(float *)(D_20896C + 0x1C), *(float *)(D_20896C + 0x20), 0, 0, 0, 0, 0, 1);
    object[0x45] = 5;
    *(float *)(resource + 0x1C) = 36.0007171630859375f;
}
