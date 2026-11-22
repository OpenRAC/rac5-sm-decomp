/* LEVEL_18:0x19BDF8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E6250[];
extern char D_001DA6C8[];
extern char D_002E6208[];

int func_19B268(void);
void func_19AC70(void *, int, int);

void *func_19BDF8(void)
{
    if (*(int *)D_002E6250 == 0)
    {
        func_19B268();
        func_19AC70((void *)D_002E6250, (int)D_001DA6C8, (int)D_002E6208);
    }
    return (void *)D_002E6250;
}
