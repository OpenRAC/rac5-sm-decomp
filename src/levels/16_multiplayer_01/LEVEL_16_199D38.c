/* LEVEL_16:0x199D38 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E62A0[];
extern char D_001DA200[];
extern char D_002E6240[];

int func_198598(void);
void func_1997D0(void *, int, int);

void *func_199D38(void)
{
    if (*(int *)D_002E62A0 == 0)
    {
        func_198598();
        func_1997D0((void *)D_002E62A0, (int)D_001DA200, (int)D_002E6240);
    }
    return (void *)D_002E62A0;
}
