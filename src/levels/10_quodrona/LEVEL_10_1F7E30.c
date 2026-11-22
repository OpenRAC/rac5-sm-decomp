/* LEVEL_10:0x1F7E30 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003A2730[];
extern char D_002349F8[];
extern char D_003A2708[];

int func_1F7380(void);
void func_1F6D88(void *, int, int);

void *func_1F7E30(void)
{
    if (*(int *)D_003A2730 == 0)
    {
        func_1F7380();
        func_1F6D88((void *)D_003A2730, (int)D_002349F8, (int)D_003A2708);
    }
    return (void *)D_003A2730;
}
