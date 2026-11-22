/* LEVEL_22:0x14D3E8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E8918[];
extern char D_0017D0A8[];
extern char D_002E8928[];

void *func_14D500(void);
void func_14D0E8(void *, int, int);

void *func_14D3E8(void)
{
    if (*(int *)D_002E8918 == 0)
    {
        func_14D500();
        func_14D0E8((void *)D_002E8918, (int)D_0017D0A8, (int)D_002E8928);
    }
    return (void *)D_002E8918;
}
