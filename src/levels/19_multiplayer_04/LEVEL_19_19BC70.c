/* LEVEL_19:0x19BC70 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E64C0[];
extern char D_001DA550[];
extern char D_002E6448[];

int func_19AF90(void);
void func_19A998(void *, int, int);

void *func_19BC70(void)
{
    if (*(int *)D_002E64C0 == 0)
    {
        func_19AF90();
        func_19A998((void *)D_002E64C0, (int)D_001DA550, (int)D_002E6448);
    }
    return (void *)D_002E64C0;
}
