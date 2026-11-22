/* LEVEL_18:0x19BFB8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E6290[];
extern char D_001DA728[];
extern char D_002E6208[];

int func_19B268(void);
void func_19AC70(void *, int, int);

void *func_19BFB8(void)
{
    if (*(int *)D_002E6290 == 0)
    {
        func_19B268();
        func_19AC70((void *)D_002E6290, (int)D_001DA728, (int)D_002E6208);
    }
    return (void *)D_002E6290;
}
