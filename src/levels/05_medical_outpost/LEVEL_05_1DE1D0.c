/* LEVEL_05:0x1DE1D0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003903B0[];
extern char D_00217338[];
extern char D_00390388[];

int func_1DD720(void);
void func_1DD128(void *, int, int);

void *func_1DE1D0(void)
{
    if (*(int *)D_003903B0 == 0)
    {
        func_1DD720();
        func_1DD128((void *)D_003903B0, (int)D_00217338, (int)D_00390388);
    }
    return (void *)D_003903B0;
}
