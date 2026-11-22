/* LEVEL_16:0x19AB18 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E6310[];
extern char D_001DA3B8[];
extern char D_002E6288[];

int func_199DC8(void);
void func_1997D0(void *, int, int);

void *func_19AB18(void)
{
    if (*(int *)D_002E6310 == 0)
    {
        func_199DC8();
        func_1997D0((void *)D_002E6310, (int)D_001DA3B8, (int)D_002E6288);
    }
    return (void *)D_002E6310;
}
