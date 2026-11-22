/* LEVEL_16:0x19AAA8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E6300[];
extern char D_001DA3A0[];
extern char D_002E6288[];

int func_199DC8(void);
void func_1997D0(void *, int, int);

void *func_19AAA8(void)
{
    if (*(int *)D_002E6300 == 0)
    {
        func_199DC8();
        func_1997D0((void *)D_002E6300, (int)D_001DA3A0, (int)D_002E6288);
    }
    return (void *)D_002E6300;
}
