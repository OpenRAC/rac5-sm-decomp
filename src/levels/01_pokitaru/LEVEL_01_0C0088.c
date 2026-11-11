typedef unsigned char u8;
typedef unsigned int u32;

typedef struct {
    int **base;
    u32 count;
} Set;

extern u8 *D_001F3FAC;
extern Set D_001FE2D8;
extern u32 D_001FE388[];
extern u8 g_bProgressive;

extern int func_0B9940(Set *set, u32 index, int stride, int value, int flag);

void func_0C0088(void)
{
    Set *set = &D_001FE2D8;
    func_0B9940(set, 0, 1,
                *(int *)(D_001F3FAC + 0x0C) ? 0x1D7 : 0x1D8, 0);
    func_0B9940(set, 3, 1,
                *(int *)(D_001F3FAC + 0x10) ? 0x1D7 : 0x1D8, 0);
    func_0B9940(set, 4, 1,
                *(int *)(D_001F3FAC + 0x14) ? 0x1D7 : 0x1D8, 0);
    func_0B9940(set, 5, 1,
                *(int *)(D_001F3FAC + 0x20) ? 0x1D7 : 0x1D8, 0);
    func_0B9940(set, 6, 1, g_bProgressive ? 0x1D7 : 0x1D8, 0);

    func_0B9940(set, 7, 1, D_001FE388[*(u32 *)(D_001F3FAC + 0x50)], 0);
}
