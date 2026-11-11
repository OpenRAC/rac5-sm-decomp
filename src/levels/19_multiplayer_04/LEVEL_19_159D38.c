typedef struct {
    char pad[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} G;

extern void func_15A578(void *a0, int a1, int a2);
extern char D_001C0000[];
extern void func_073660(void *a0, void *a1, int a2, int a3, int a4, int a5,
                        int a6, int a7, float f0, float f1, float f2,
                        float f3);

void func_159D38(void *a0)
{
    G *g;

    func_15A578(a0, 5, 0);
    g = *(G **)(D_001C0000 - 0x1020);
    if (g != 0)
        func_073660(a0, g, 0, 0, 0, 0, 0, 1, g->f14, g->f18, g->f1C, g->f20);
}
