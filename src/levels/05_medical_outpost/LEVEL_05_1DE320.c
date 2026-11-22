/* LEVEL_05:0x1DE320 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003903E0[];
extern char D_00217380[];
extern char D_00390388[];

int func_1DD720(void);
void func_1DD128(void *, int, int);

void *func_1DE320(void)
{
    if (*(int *)D_003903E0 == 0)
    {
        func_1DD720();
        func_1DD128((void *)D_003903E0, (int)D_00217380, (int)D_00390388);
    }
    return (void *)D_003903E0;
}
