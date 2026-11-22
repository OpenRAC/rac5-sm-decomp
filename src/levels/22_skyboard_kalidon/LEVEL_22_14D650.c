/* LEVEL_22:0x14D650 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E8960[];
extern char D_0017D100[];
extern char D_002E8900[];

int func_14BEB0(void);
void func_14D0E8(void *, int, int);

void *func_14D650(void)
{
    if (*(int *)D_002E8960 == 0)
    {
        func_14BEB0();
        func_14D0E8((void *)D_002E8960, (int)D_0017D100, (int)D_002E8900);
    }
    return (void *)D_002E8960;
}
