/* LEVEL_18:0x19AF70 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E61D8[];
extern char D_001DA518[];
extern char D_002E61E8[];

void *func_19B088(void);
void func_19AC70(void *, int, int);

void *func_19AF70(void)
{
    if (*(int *)D_002E61D8 == 0)
    {
        func_19B088();
        func_19AC70((void *)D_002E61D8, (int)D_001DA518, (int)D_002E61E8);
    }
    return (void *)D_002E61D8;
}
