/* LEVEL_22:0x14D478 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E8938[];
extern char D_0017D0C0[];
extern char D_002E8928[];

void *func_14D500(void);
void func_14D0E8(void *, int, int);

void *func_14D478(void)
{
    if (*(int *)D_002E8938 == 0)
    {
        func_14D500();
        func_14D0E8((void *)D_002E8938, (int)D_0017D0C0, (int)D_002E8928);
    }
    return (void *)D_002E8938;
}
