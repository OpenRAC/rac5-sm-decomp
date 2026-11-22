/* LEVEL_19:0x19AF00 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E6460[];
extern char D_001DA3B0[];
extern char D_002E6400[];

int func_199760(void);
void func_19A998(void *, int, int);

void *func_19AF00(void)
{
    if (*(int *)D_002E6460 == 0)
    {
        func_199760();
        func_19A998((void *)D_002E6460, (int)D_001DA3B0, (int)D_002E6400);
    }
    return (void *)D_002E6460;
}
