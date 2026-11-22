/* LEVEL_16:0x199CA0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E6290[];
extern char D_001DA1F0[];
extern char D_002E6240[];

int func_198598(void);
void func_1997D0(void *, int, int);

void *func_199CA0(void)
{
    if (*(int *)D_002E6290 == 0)
    {
        func_198598();
        func_1997D0((void *)D_002E6290, (int)D_001DA1F0, (int)D_002E6240);
    }
    return (void *)D_002E6290;
}
