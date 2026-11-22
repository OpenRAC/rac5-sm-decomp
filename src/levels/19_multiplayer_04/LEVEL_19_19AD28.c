/* LEVEL_19:0x19AD28 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002E6438[];
extern char D_001DA370[];
extern char D_002E6428[];

void *func_19ADB0(void);
void func_19A998(void *, int, int);

void *func_19AD28(void)
{
    if (*(int *)D_002E6438 == 0)
    {
        func_19ADB0();
        func_19A998((void *)D_002E6438, (int)D_001DA370, (int)D_002E6428);
    }
    return (void *)D_002E6438;
}
