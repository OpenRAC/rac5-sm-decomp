/* LEVEL_17:0x18D1A8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002D7438[];
extern char D_001CB4D0[];
extern char D_002D7428[];

void *func_18D230(void);
void func_18CE18(void *, int, int);

void *func_18D1A8(void)
{
    if (*(int *)D_002D7438 == 0)
    {
        func_18D230();
        func_18CE18((void *)D_002D7438, (int)D_001CB4D0, (int)D_002D7428);
    }
    return (void *)D_002D7438;
}
