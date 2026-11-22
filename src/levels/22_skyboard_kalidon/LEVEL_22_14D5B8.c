/* LEVEL_22:0x14D5B8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E8950[];
extern char D_0017D0F0[];
extern char D_002E8900[];

int func_14BEB0(void);
void func_14D0E8(void *, int, int);

void *func_14D5B8(void)
{
    if (*(int *)D_002E8950 == 0)
    {
        func_14BEB0();
        func_14D0E8((void *)D_002E8950, (int)D_0017D0F0, (int)D_002E8900);
    }
    return (void *)D_002E8950;
}
