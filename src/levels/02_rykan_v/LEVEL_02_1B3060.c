/* LEVEL_02:0x1B3060 -- placement copy of LEVEL_01_19D370.c. */
extern void func_1F04B8(unsigned int *record);
extern void func_0E45D0(float scale, char *out, unsigned int color);
extern void func_0872A0(char *object, char *listener, float a, float b, float c, float d, char *e, int f, int g, int h, int i, int j);
extern char *D_21D9AC;
void func_1B3060(char *object, char *argument)
{
    unsigned int record[2];
    char *resource = *(char **)(object + 0x54);
    char *state = *(char **)(object + 0x58);
    record[0] = *(unsigned int *)(argument + 0x59C);
    record[1] = 0xFFFF8080U;
    func_1F04B8(record);
    func_0E45D0(1.5f, state + 0x28, 0xFF8080U);
    if (D_21D9AC)
        func_0872A0(object, D_21D9AC, *(float *)(D_21D9AC + 0x14), *(float *)(D_21D9AC + 0x18), *(float *)(D_21D9AC + 0x1C), *(float *)(D_21D9AC + 0x20), 0, 0, 0, 0, 0, 1);
    object[0x45] = 5;
    *(float *)(resource + 0x1C) = 36.0007171630859375f;
}
