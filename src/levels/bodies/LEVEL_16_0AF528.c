typedef unsigned char u8;
typedef unsigned int u32;

typedef struct {
    int **base;
    u32 count;
} Set;

extern u8 *D_001A1AB4;
extern Set D_001AC350;
extern u32 D_001AC400[];
extern u8 g_bProgressive;

extern int func_0A8990(Set *set, u32 index, int stride, int value, int flag);

void func_0AF528(void)
{
    Set *set = &D_001AC350;
    func_0A8990(set, 0, 1,
                *(int *)(D_001A1AB4 + 0x0C) ? 0x1D7 : 0x1D8, 0);
    func_0A8990(set, 3, 1,
                *(int *)(D_001A1AB4 + 0x10) ? 0x1D7 : 0x1D8, 0);
    func_0A8990(set, 4, 1,
                *(int *)(D_001A1AB4 + 0x14) ? 0x1D7 : 0x1D8, 0);
    func_0A8990(set, 5, 1,
                *(int *)(D_001A1AB4 + 0x20) ? 0x1D7 : 0x1D8, 0);
    func_0A8990(set, 6, 1, g_bProgressive ? 0x1D7 : 0x1D8, 0);

    func_0A8990(set, 7, 1, D_001AC400[*(u32 *)(D_001A1AB4 + 0x50)], 0);
}
