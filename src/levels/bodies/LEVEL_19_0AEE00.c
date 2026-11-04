typedef unsigned char u8;
typedef unsigned int u32;

typedef struct {
    int **base;
    u32 count;
} Set;

extern u8 *D_001A2C34;
extern Set D_001AD4D0;
extern u32 D_001AD580[];
extern u8 g_bProgressive;

extern int func_0A8268(Set *set, u32 index, int stride, int value, int flag);

void func_0AEE00(void)
{
    Set *set = &D_001AD4D0;
    func_0A8268(set, 0, 1,
                *(int *)(D_001A2C34 + 0x0C) ? 0x1D7 : 0x1D8, 0);
    func_0A8268(set, 3, 1,
                *(int *)(D_001A2C34 + 0x10) ? 0x1D7 : 0x1D8, 0);
    func_0A8268(set, 4, 1,
                *(int *)(D_001A2C34 + 0x14) ? 0x1D7 : 0x1D8, 0);
    func_0A8268(set, 5, 1,
                *(int *)(D_001A2C34 + 0x20) ? 0x1D7 : 0x1D8, 0);
    func_0A8268(set, 6, 1, g_bProgressive ? 0x1D7 : 0x1D8, 0);

    func_0A8268(set, 7, 1, D_001AD580[*(u32 *)(D_001A2C34 + 0x50)], 0);
}
