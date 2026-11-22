/* LEVEL_05:0x1DE400 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00390400[];
extern char D_002173B0[];
extern char D_00390388[];

int func_1DD720(void);
void func_1DD128(void *, int, int);

void *func_1DE400(void)
{
    if (*(int *)D_00390400 == 0)
    {
        func_1DD720();
        func_1DD128((void *)D_00390400, (int)D_002173B0, (int)D_00390388);
    }
    return (void *)D_00390400;
}
