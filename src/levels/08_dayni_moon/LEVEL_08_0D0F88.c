extern unsigned char D_00249A90[];
extern int D_00249A64;
extern int D_00249A68;

extern int func_1442C8(void);

void func_0D0F88(void)
{
    if (D_00249A90[0] != 0)
    {
        func_1442C8();
    }
    D_00249A90[0] = 0;
    D_00249A64 = 0;
    D_00249A68 = 0;
}
