/* LEVEL_17:0x18E160 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002D74D0[];
extern char D_001CB6C8[];
extern char D_002D7448[];

int func_18D410(void);
void func_18CE18(void *, int, int);

void *func_18E160(void)
{
    if (*(int *)D_002D74D0 == 0)
    {
        func_18D410();
        func_18CE18((void *)D_002D74D0, (int)D_001CB6C8, (int)D_002D7448);
    }
    return (void *)D_002D74D0;
}
