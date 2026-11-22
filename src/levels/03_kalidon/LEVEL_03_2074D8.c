/* LEVEL_03:0x2074D8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B4180[];
extern char D_002464D0[];
extern char D_003B4148[];

int func_2069B8(void);
void func_2063C0(void *, int, int);

void *func_2074D8(void)
{
    if (*(int *)D_003B4180 == 0)
    {
        func_2069B8();
        func_2063C0((void *)D_003B4180, (int)D_002464D0, (int)D_003B4148);
    }
    return (void *)D_003B4180;
}
