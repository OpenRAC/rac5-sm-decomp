/* LEVEL_19:0x19BA40 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E6470[];
extern char D_001DA4D8[];
extern char D_002E6448[];

int func_19AF90(void);
void func_19A998(void *, int, int);

void *func_19BA40(void)
{
    if (*(int *)D_002E6470 == 0)
    {
        func_19AF90();
        func_19A998((void *)D_002E6470, (int)D_001DA4D8, (int)D_002E6448);
    }
    return (void *)D_002E6470;
}
