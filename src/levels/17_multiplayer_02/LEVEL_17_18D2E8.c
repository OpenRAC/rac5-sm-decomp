/* LEVEL_17:0x18D2E8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002D7450[];
extern char D_001CB500[];
extern char D_002D7400[];

int func_18BBE0(void);
void func_18CE18(void *, int, int);

void *func_18D2E8(void)
{
    if (*(int *)D_002D7450 == 0)
    {
        func_18BBE0();
        func_18CE18((void *)D_002D7450, (int)D_001CB500, (int)D_002D7400);
    }
    return (void *)D_002D7450;
}
