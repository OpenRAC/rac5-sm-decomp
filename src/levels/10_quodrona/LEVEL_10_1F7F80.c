/* LEVEL_10:0x1F7F80 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003A2760[];
extern char D_00234A40[];
extern char D_003A2708[];

int func_1F7380(void);
void func_1F6D88(void *, int, int);

void *func_1F7F80(void)
{
    if (*(int *)D_003A2760 == 0)
    {
        func_1F7380();
        func_1F6D88((void *)D_003A2760, (int)D_00234A40, (int)D_003A2708);
    }
    return (void *)D_003A2760;
}
