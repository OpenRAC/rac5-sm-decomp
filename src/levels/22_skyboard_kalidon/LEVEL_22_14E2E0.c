/* LEVEL_22:0x14E2E0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E89A0[];
extern char D_0017D270[];
extern char D_002E8948[];

int func_14D6E0(void);
void func_14D0E8(void *, int, int);

void *func_14E2E0(void)
{
    if (*(int *)D_002E89A0 == 0)
    {
        func_14D6E0();
        func_14D0E8((void *)D_002E89A0, (int)D_0017D270, (int)D_002E8948);
    }
    return (void *)D_002E89A0;
}
