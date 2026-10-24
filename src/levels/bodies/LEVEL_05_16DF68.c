typedef struct {
    char pad[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} G;

extern G *D_001F6B20;

extern void func_07E070(void *a0, void *a1, int a2, int a3, int a4, int a5,
                        int a6, int a7, float f0, float f1, float f2,
                        float f3);

void func_16DF68(void *a0)
{
    G *g = D_001F6B20;

    if (g != 0)
        func_07E070(a0, g, 0, 0, 0, 0, 0, 1, g->f14, g->f18, g->f1C, g->f20);
}
