/* LEVEL_10:0x1F7088 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003A26D8[];
extern char D_00234878[];
extern char D_003A26E8[];

void *func_1F71A0(void);
void func_1F6D88(void *, int, int);

void *func_1F7088(void)
{
    if (*(int *)D_003A26D8 == 0)
    {
        func_1F71A0();
        func_1F6D88((void *)D_003A26D8, (int)D_00234878, (int)D_003A26E8);
    }
    return (void *)D_003A26D8;
}
