/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_001E4F7C;
extern int D_001E4F80;
extern int D_001E4F84;
extern int D_001E4F88;
extern u32 D_00284B78;
extern u32 D_00284B6C;
extern u32 D_00284B7C;

extern int func_102E78(u32 mode);

void func_06F3E0(void)
{
    if (D_001E4F7C == -1)
        D_001E4F7C = func_102E78((D_00284B78 << 16) | 0xB8003045u);
    if (D_001E4F80 == -1)
        D_001E4F80 = func_102E78((D_00284B78 << 16) | 0xB00030C5u);
    if (D_001E4F84 == -1)
        D_001E4F84 = func_102E78((D_00284B6C << 16) | 0xB00030C5u);
    if (D_001E4F88 == -1)
        D_001E4F88 = func_102E78((D_00284B7C << 16) | 0xB8003045u);
}
