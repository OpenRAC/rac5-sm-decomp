/* LEVEL_19:0x19BAB0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E6480[];
extern char D_001DA4F0[];
extern char D_002E6448[];

int func_19AF90(void);
void func_19A998(void *, int, int);

void *func_19BAB0(void)
{
    if (*(int *)D_002E6480 == 0)
    {
        func_19AF90();
        func_19A998((void *)D_002E6480, (int)D_001DA4F0, (int)D_002E6448);
    }
    return (void *)D_002E6480;
}
