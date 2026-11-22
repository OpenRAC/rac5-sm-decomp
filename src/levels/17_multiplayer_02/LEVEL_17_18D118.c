/* LEVEL_17:0x18D118 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002D7418[];
extern char D_001CB4B8[];
extern char D_002D7428[];

void *func_18D230(void);
void func_18CE18(void *, int, int);

void *func_18D118(void)
{
    if (*(int *)D_002D7418 == 0)
    {
        func_18D230();
        func_18CE18((void *)D_002D7418, (int)D_001CB4B8, (int)D_002D7428);
    }
    return (void *)D_002D7418;
}
