/* LEVEL_21:0x142F90 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002F5620[];
extern char D_00173640[];
extern char D_002F55C0[];

int func_1417F0(void);
void func_142A28(void *, int, int);

void *func_142F90(void)
{
    if (*(int *)D_002F5620 == 0)
    {
        func_1417F0();
        func_142A28((void *)D_002F5620, (int)D_00173640, (int)D_002F55C0);
    }
    return (void *)D_002F5620;
}
