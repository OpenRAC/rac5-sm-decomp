typedef unsigned char u8;
typedef unsigned int u32;

typedef struct {
    int **base;
    u32 count;
} Set;

extern u8 *D_001FCFAC;
extern Set D_002072D8;
extern u32 D_00207388[];
extern u8 g_bProgressive;

extern int func_0BAC88(Set *set, u32 index, int stride, int value, int flag);

void func_0C13D8(void)
{
    Set *set = &D_002072D8;
    func_0BAC88(set, 0, 1,
                *(int *)(D_001FCFAC + 0x0C) ? 0x1D7 : 0x1D8, 0);
    func_0BAC88(set, 3, 1,
                *(int *)(D_001FCFAC + 0x10) ? 0x1D7 : 0x1D8, 0);
    func_0BAC88(set, 4, 1,
                *(int *)(D_001FCFAC + 0x14) ? 0x1D7 : 0x1D8, 0);
    func_0BAC88(set, 5, 1,
                *(int *)(D_001FCFAC + 0x20) ? 0x1D7 : 0x1D8, 0);
    func_0BAC88(set, 6, 1, g_bProgressive ? 0x1D7 : 0x1D8, 0);

    func_0BAC88(set, 7, 1, D_00207388[*(u32 *)(D_001FCFAC + 0x50)], 0);
}
