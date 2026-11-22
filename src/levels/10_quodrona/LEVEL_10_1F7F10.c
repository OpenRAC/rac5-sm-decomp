/* LEVEL_10:0x1F7F10 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003A2750[];
extern char D_00234A28[];
extern char D_003A2708[];

int func_1F7380(void);
void func_1F6D88(void *, int, int);

void *func_1F7F10(void)
{
    if (*(int *)D_003A2750 == 0)
    {
        func_1F7380();
        func_1F6D88((void *)D_003A2750, (int)D_00234A28, (int)D_003A2708);
    }
    return (void *)D_003A2750;
}
