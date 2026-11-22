/* LEVEL_10:0x1F8060 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003A2780[];
extern char D_00234A70[];
extern char D_003A2708[];

int func_1F7380(void);
void func_1F6D88(void *, int, int);

void *func_1F8060(void)
{
    if (*(int *)D_003A2780 == 0)
    {
        func_1F7380();
        func_1F6D88((void *)D_003A2780, (int)D_00234A70, (int)D_003A2708);
    }
    return (void *)D_003A2780;
}
