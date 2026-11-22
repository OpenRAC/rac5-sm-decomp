/* LEVEL_18:0x19BF48 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E6280[];
extern char D_001DA710[];
extern char D_002E6208[];

int func_19B268(void);
void func_19AC70(void *, int, int);

void *func_19BF48(void)
{
    if (*(int *)D_002E6280 == 0)
    {
        func_19B268();
        func_19AC70((void *)D_002E6280, (int)D_001DA710, (int)D_002E6208);
    }
    return (void *)D_002E6280;
}
