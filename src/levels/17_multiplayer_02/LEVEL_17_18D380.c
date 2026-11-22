/* LEVEL_17:0x18D380 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002D7460[];
extern char D_001CB510[];
extern char D_002D7400[];

int func_18BBE0(void);
void func_18CE18(void *, int, int);

void *func_18D380(void)
{
    if (*(int *)D_002D7460 == 0)
    {
        func_18BBE0();
        func_18CE18((void *)D_002D7460, (int)D_001CB510, (int)D_002D7400);
    }
    return (void *)D_002D7460;
}
