/* LEVEL_21:0x142EF8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002F5610[];
extern char D_00173630[];
extern char D_002F55C0[];

int func_1417F0(void);
void func_142A28(void *, int, int);

void *func_142EF8(void)
{
    if (*(int *)D_002F5610 == 0)
    {
        func_1417F0();
        func_142A28((void *)D_002F5610, (int)D_00173630, (int)D_002F55C0);
    }
    return (void *)D_002F5610;
}
