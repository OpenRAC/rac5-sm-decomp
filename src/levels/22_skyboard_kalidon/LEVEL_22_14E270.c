/* LEVEL_22:0x14E270 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E8990[];
extern char D_0017D258[];
extern char D_002E8948[];

int func_14D6E0(void);
void func_14D0E8(void *, int, int);

void *func_14E270(void)
{
    if (*(int *)D_002E8990 == 0)
    {
        func_14D6E0();
        func_14D0E8((void *)D_002E8990, (int)D_0017D258, (int)D_002E8948);
    }
    return (void *)D_002E8990;
}
