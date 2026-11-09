/* LEVEL_24:0x197C78 -- placement copy of LEVEL_01_1B6190.c: resets an effect record and five slots of its linked state block. */
extern void func_197E30(char *param);
extern void func_139E70(int value);

char *func_197C78(int param_1, char *param_2)
{
    char *base = *(char **)(param_2 + 0x58);
    int *p5;
    char *p2;
    int *p3;
    unsigned int i;
    int v;
    int m;

    func_197E30(param_2);
    v = *(int *)(base + 0x80);
    if (v != 0)
        func_139E70(v);
    p5 = (int *)(base + 0x68);
    i = 0;
    m = -1;
    p2 = base + 0x84;
    p3 = (int *)(base + 4);
    *(int *)(param_2 + 0xC) = 0;
    *(float *)(param_2 + 0x3C) = 1.0f;
    *(int *)(param_2 + 0x1C) = 0;
    *(int *)(param_2 + 0x2C) = 0;
    *(int *)(param_2 + 0x70) = 0;
    *(char *)(param_2 + 0x45) = 0;
    *(int *)(base + 0x80) = param_1;
    *(int *)(base + 0x7C) = 0;
    do {
        *p5 = 0;
        *p3 = m;
        p2[i] = 0;
        i++;
        p3 += 5;
        p5++;
    } while (i < 5);
    return param_2;
}
