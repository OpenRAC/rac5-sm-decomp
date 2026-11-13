/* LEVEL_08:0x1CFA28 -- placement copy of LEVEL_01_19D370.c. */
extern void func_21D580(unsigned int *record);
extern void func_0E8C10(float scale, char *out, unsigned int color);
extern void func_088940(char *object, char *listener, float a, float b, float c, float d, char *e, int f, int g, int h, int i, int j);
extern char *D_2520EC;
void func_1CFA28(char *object, char *argument)
{
    unsigned int record[2];
    char *resource = *(char **)(object + 0x54);
    char *state = *(char **)(object + 0x58);
    record[0] = *(unsigned int *)(argument + 0x59C);
    record[1] = 0xFFFF8080U;
    func_21D580(record);
    func_0E8C10(1.5f, state + 0x28, 0xFF8080U);
    if (D_2520EC)
        func_088940(object, D_2520EC, *(float *)(D_2520EC + 0x14), *(float *)(D_2520EC + 0x18), *(float *)(D_2520EC + 0x1C), *(float *)(D_2520EC + 0x20), 0, 0, 0, 0, 0, 1);
    object[0x45] = 5;
    *(float *)(resource + 0x1C) = 36.0007171630859375f;
}
