/* LEVEL_16:0x199AD0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E6258[];
extern char D_001DA1A8[];
extern char D_002E6268[];

void *func_199BE8(void);
void func_1997D0(void *, int, int);

void *func_199AD0(void)
{
    if (*(int *)D_002E6258 == 0)
    {
        func_199BE8();
        func_1997D0((void *)D_002E6258, (int)D_001DA1A8, (int)D_002E6268);
    }
    return (void *)D_002E6258;
}
