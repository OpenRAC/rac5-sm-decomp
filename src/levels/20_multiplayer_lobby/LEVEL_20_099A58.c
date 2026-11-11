typedef unsigned char u8;
typedef unsigned int u32;

typedef struct {
    int **base;
    u32 count;
} Set;

extern u8 *D_00104194;
extern Set D_0010EA30;
extern u32 D_0010EAE0[];
extern u8 g_bProgressive;

extern int func_092EC0(Set *set, u32 index, int stride, int value, int flag);

void func_099A58(void)
{
    Set *set = &D_0010EA30;
    func_092EC0(set, 0, 1,
                *(int *)(D_00104194 + 0x0C) ? 0x1D7 : 0x1D8, 0);
    func_092EC0(set, 3, 1,
                *(int *)(D_00104194 + 0x10) ? 0x1D7 : 0x1D8, 0);
    func_092EC0(set, 4, 1,
                *(int *)(D_00104194 + 0x14) ? 0x1D7 : 0x1D8, 0);
    func_092EC0(set, 5, 1,
                *(int *)(D_00104194 + 0x20) ? 0x1D7 : 0x1D8, 0);
    func_092EC0(set, 6, 1, g_bProgressive ? 0x1D7 : 0x1D8, 0);

    func_092EC0(set, 7, 1, D_0010EAE0[*(u32 *)(D_00104194 + 0x50)], 0);
}
