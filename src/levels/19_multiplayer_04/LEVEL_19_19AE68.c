/* LEVEL_19:0x19AE68 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E6450[];
extern char D_001DA3A0[];
extern char D_002E6400[];

int func_199760(void);
void func_19A998(void *, int, int);

void *func_19AE68(void)
{
    if (*(int *)D_002E6450 == 0)
    {
        func_199760();
        func_19A998((void *)D_002E6450, (int)D_001DA3A0, (int)D_002E6400);
    }
    return (void *)D_002E6450;
}
