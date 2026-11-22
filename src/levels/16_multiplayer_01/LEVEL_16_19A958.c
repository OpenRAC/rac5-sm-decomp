/* LEVEL_16:0x19A958 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E62D0[];
extern char D_001DA358[];
extern char D_002E6288[];

int func_199DC8(void);
void func_1997D0(void *, int, int);

void *func_19A958(void)
{
    if (*(int *)D_002E62D0 == 0)
    {
        func_199DC8();
        func_1997D0((void *)D_002E62D0, (int)D_001DA358, (int)D_002E6288);
    }
    return (void *)D_002E62D0;
}
