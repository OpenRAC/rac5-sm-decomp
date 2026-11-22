/* LEVEL_10:0x1F72F0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003A2720[];
extern char D_002348D0[];
extern char D_003A26C0[];

int func_1F5B50(void);
void func_1F6D88(void *, int, int);

void *func_1F72F0(void)
{
    if (*(int *)D_003A2720 == 0)
    {
        func_1F5B50();
        func_1F6D88((void *)D_003A2720, (int)D_002348D0, (int)D_003A26C0);
    }
    return (void *)D_003A2720;
}
