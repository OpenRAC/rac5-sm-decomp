/* LEVEL_16:0x199B60 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E6278[];
extern char D_001DA1C0[];
extern char D_002E6268[];

void *func_199BE8(void);
void func_1997D0(void *, int, int);

void *func_199B60(void)
{
    if (*(int *)D_002E6278 == 0)
    {
        func_199BE8();
        func_1997D0((void *)D_002E6278, (int)D_001DA1C0, (int)D_002E6268);
    }
    return (void *)D_002E6278;
}
