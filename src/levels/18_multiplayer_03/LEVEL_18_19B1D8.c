/* LEVEL_18:0x19B1D8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E6220[];
extern char D_001DA570[];
extern char D_002E61C0[];

int func_199A38(void);
void func_19AC70(void *, int, int);

void *func_19B1D8(void)
{
    if (*(int *)D_002E6220 == 0)
    {
        func_199A38();
        func_19AC70((void *)D_002E6220, (int)D_001DA570, (int)D_002E61C0);
    }
    return (void *)D_002E6220;
}
