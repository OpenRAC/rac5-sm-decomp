/* LEVEL_05:0x17D298 -- randomises a timer block and resets flags of the owner object. */
extern int rand(void);
extern float D_001F7658[];

void func_17D298(char *o)
{
    char *s2;
    char *s1;
    float a;
    float b;
    float r;
    unsigned int flags;

    s2 = *(char **)(o + 0x58);
    s1 = s2 + 0x30;
    *(int *)(s1 + 4) = 0;
    s1[0xC] = 0;
    b = D_001F7658[12];
    a = D_001F7658[11] - b;
    r = (float)rand();
    r = r * 4.6566128730773926e-10f;
    a = a * r;
    b = b + a;
    *(float *)(s2 + 0x30) = b;
    *(float *)(s1 + 8) = 3.1415927410125732f;
    o[0x45] = 3;
    flags = *(unsigned int *)(o + 0x64);
    *(unsigned int *)(o + 0x68) = 0xFFFFFFFF;
    o[0x46] = 0;
    *(unsigned int *)(o + 0x64) = flags | 0x08000000;
    *(int *)(o + 0x70) = 0;
}
