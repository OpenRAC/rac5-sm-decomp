/* LEVEL_22:0x14E190 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E8970[];
extern char D_0017D228[];
extern char D_002E8948[];

int func_14D6E0(void);
void func_14D0E8(void *, int, int);

void *func_14E190(void)
{
    if (*(int *)D_002E8970 == 0)
    {
        func_14D6E0();
        func_14D0E8((void *)D_002E8970, (int)D_0017D228, (int)D_002E8948);
    }
    return (void *)D_002E8970;
}
