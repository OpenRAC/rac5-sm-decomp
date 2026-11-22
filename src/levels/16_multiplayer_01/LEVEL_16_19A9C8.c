/* LEVEL_16:0x19A9C8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E62E0[];
extern char D_001DA370[];
extern char D_002E6288[];

int func_199DC8(void);
void func_1997D0(void *, int, int);

void *func_19A9C8(void)
{
    if (*(int *)D_002E62E0 == 0)
    {
        func_199DC8();
        func_1997D0((void *)D_002E62E0, (int)D_001DA370, (int)D_002E6288);
    }
    return (void *)D_002E62E0;
}
