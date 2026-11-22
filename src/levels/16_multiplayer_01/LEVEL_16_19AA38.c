/* LEVEL_16:0x19AA38 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E62F0[];
extern char D_001DA388[];
extern char D_002E6288[];

int func_199DC8(void);
void func_1997D0(void *, int, int);

void *func_19AA38(void)
{
    if (*(int *)D_002E62F0 == 0)
    {
        func_199DC8();
        func_1997D0((void *)D_002E62F0, (int)D_001DA388, (int)D_002E6288);
    }
    return (void *)D_002E62F0;
}
