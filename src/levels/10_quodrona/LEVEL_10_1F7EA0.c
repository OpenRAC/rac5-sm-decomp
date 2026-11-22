/* LEVEL_10:0x1F7EA0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003A2740[];
extern char D_00234A10[];
extern char D_003A2708[];

int func_1F7380(void);
void func_1F6D88(void *, int, int);

void *func_1F7EA0(void)
{
    if (*(int *)D_003A2740 == 0)
    {
        func_1F7380();
        func_1F6D88((void *)D_003A2740, (int)D_00234A10, (int)D_003A2708);
    }
    return (void *)D_003A2740;
}
