/* LEVEL_19:0x19AC98 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E6418[];
extern char D_001DA358[];
extern char D_002E6428[];

void *func_19ADB0(void);
void func_19A998(void *, int, int);

void *func_19AC98(void)
{
    if (*(int *)D_002E6418 == 0)
    {
        func_19ADB0();
        func_19A998((void *)D_002E6418, (int)D_001DA358, (int)D_002E6428);
    }
    return (void *)D_002E6418;
}
