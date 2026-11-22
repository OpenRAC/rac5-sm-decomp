/* LEVEL_10:0x1F7118 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003A26F8[];
extern char D_00234890[];
extern char D_003A26E8[];

void *func_1F71A0(void);
void func_1F6D88(void *, int, int);

void *func_1F7118(void)
{
    if (*(int *)D_003A26F8 == 0)
    {
        func_1F71A0();
        func_1F6D88((void *)D_003A26F8, (int)D_00234890, (int)D_003A26E8);
    }
    return (void *)D_003A26F8;
}
