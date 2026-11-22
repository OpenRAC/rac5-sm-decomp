/* LEVEL_19:0x19BCE0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E64D0[];
extern char D_001DA568[];
extern char D_002E6448[];

int func_19AF90(void);
void func_19A998(void *, int, int);

void *func_19BCE0(void)
{
    if (*(int *)D_002E64D0 == 0)
    {
        func_19AF90();
        func_19A998((void *)D_002E64D0, (int)D_001DA568, (int)D_002E6448);
    }
    return (void *)D_002E64D0;
}
