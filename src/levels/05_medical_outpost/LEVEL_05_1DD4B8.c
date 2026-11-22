/* LEVEL_05:0x1DD4B8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00390378[];
extern char D_002171D0[];
extern char D_00390368[];

void *func_1DD540(void);
void func_1DD128(void *, int, int);

void *func_1DD4B8(void)
{
    if (*(int *)D_00390378 == 0)
    {
        func_1DD540();
        func_1DD128((void *)D_00390378, (int)D_002171D0, (int)D_00390368);
    }
    return (void *)D_00390378;
}
