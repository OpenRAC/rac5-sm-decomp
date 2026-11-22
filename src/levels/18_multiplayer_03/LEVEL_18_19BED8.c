/* LEVEL_18:0x19BED8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E6270[];
extern char D_001DA6F8[];
extern char D_002E6208[];

int func_19B268(void);
void func_19AC70(void *, int, int);

void *func_19BED8(void)
{
    if (*(int *)D_002E6270 == 0)
    {
        func_19B268();
        func_19AC70((void *)D_002E6270, (int)D_001DA6F8, (int)D_002E6208);
    }
    return (void *)D_002E6270;
}
