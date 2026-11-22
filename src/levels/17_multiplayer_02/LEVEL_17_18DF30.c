/* LEVEL_17:0x18DF30 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002D7480[];
extern char D_001CB650[];
extern char D_002D7448[];

int func_18D410(void);
void func_18CE18(void *, int, int);

void *func_18DF30(void)
{
    if (*(int *)D_002D7480 == 0)
    {
        func_18D410();
        func_18CE18((void *)D_002D7480, (int)D_001CB650, (int)D_002D7448);
    }
    return (void *)D_002D7480;
}
