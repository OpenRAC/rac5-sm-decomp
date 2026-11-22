/* LEVEL_16:0x19A8E8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E62C0[];
extern char D_001DA340[];
extern char D_002E6288[];

int func_199DC8(void);
void func_1997D0(void *, int, int);

void *func_19A8E8(void)
{
    if (*(int *)D_002E62C0 == 0)
    {
        func_199DC8();
        func_1997D0((void *)D_002E62C0, (int)D_001DA340, (int)D_002E6288);
    }
    return (void *)D_002E62C0;
}
