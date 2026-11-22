/* LEVEL_10:0x1F7FF0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003A2770[];
extern char D_00234A58[];
extern char D_003A2708[];

int func_1F7380(void);
void func_1F6D88(void *, int, int);

void *func_1F7FF0(void)
{
    if (*(int *)D_003A2770 == 0)
    {
        func_1F7380();
        func_1F6D88((void *)D_003A2770, (int)D_00234A58, (int)D_003A2708);
    }
    return (void *)D_003A2770;
}
