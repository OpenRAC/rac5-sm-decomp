typedef unsigned char u8;
typedef unsigned int u32;

typedef struct {
    int **base;
    u32 count;
} Set;

extern u8 *D_0020C62C;
extern Set D_00216958;
extern u32 D_00216A08[];
extern u8 g_bProgressive;

extern int func_0B9728(Set *set, u32 index, int stride, int value, int flag);

void func_0BFE70(void)
{
    Set *set = &D_00216958;
    func_0B9728(set, 0, 1,
                *(int *)(D_0020C62C + 0x0C) ? 0x1D7 : 0x1D8, 0);
    func_0B9728(set, 3, 1,
                *(int *)(D_0020C62C + 0x10) ? 0x1D7 : 0x1D8, 0);
    func_0B9728(set, 4, 1,
                *(int *)(D_0020C62C + 0x14) ? 0x1D7 : 0x1D8, 0);
    func_0B9728(set, 5, 1,
                *(int *)(D_0020C62C + 0x20) ? 0x1D7 : 0x1D8, 0);
    func_0B9728(set, 6, 1, g_bProgressive ? 0x1D7 : 0x1D8, 0);

    func_0B9728(set, 7, 1, D_00216A08[*(u32 *)(D_0020C62C + 0x50)], 0);
}
