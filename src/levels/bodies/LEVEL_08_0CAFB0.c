typedef unsigned char u8;
typedef unsigned int u32;

typedef struct {
    int **base;
    u32 count;
} Set;

extern u8 *D_0023CB2C;
extern Set D_00247198;
extern u32 D_00247248[];
extern u8 g_bProgressive;

extern int func_0C4830(Set *set, u32 index, int stride, int value, int flag);

void func_0CAFB0(void)
{
    Set *set = &D_00247198;
    func_0C4830(set, 0, 1,
                *(int *)(D_0023CB2C + 0x0C) ? 0x1D7 : 0x1D8, 0);
    func_0C4830(set, 3, 1,
                *(int *)(D_0023CB2C + 0x10) ? 0x1D7 : 0x1D8, 0);
    func_0C4830(set, 4, 1,
                *(int *)(D_0023CB2C + 0x14) ? 0x1D7 : 0x1D8, 0);
    func_0C4830(set, 5, 1,
                *(int *)(D_0023CB2C + 0x20) ? 0x1D7 : 0x1D8, 0);
    func_0C4830(set, 6, 1, g_bProgressive ? 0x1D7 : 0x1D8, 0);

    func_0C4830(set, 7, 1, D_00247248[*(u32 *)(D_0023CB2C + 0x50)], 0);
}
