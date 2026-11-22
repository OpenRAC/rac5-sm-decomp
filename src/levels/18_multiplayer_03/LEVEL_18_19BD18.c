/* LEVEL_18:0x19BD18 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E6230[];
extern char D_001DA698[];
extern char D_002E6208[];

int func_19B268(void);
void func_19AC70(void *, int, int);

void *func_19BD18(void)
{
    if (*(int *)D_002E6230 == 0)
    {
        func_19B268();
        func_19AC70((void *)D_002E6230, (int)D_001DA698, (int)D_002E6208);
    }
    return (void *)D_002E6230;
}
