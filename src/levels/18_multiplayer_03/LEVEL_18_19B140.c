/* LEVEL_18:0x19B140 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E6210[];
extern char D_001DA560[];
extern char D_002E61C0[];

int func_199A38(void);
void func_19AC70(void *, int, int);

void *func_19B140(void)
{
    if (*(int *)D_002E6210 == 0)
    {
        func_199A38();
        func_19AC70((void *)D_002E6210, (int)D_001DA560, (int)D_002E61C0);
    }
    return (void *)D_002E6210;
}
