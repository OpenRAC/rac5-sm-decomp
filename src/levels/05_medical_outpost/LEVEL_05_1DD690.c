/* LEVEL_05:0x1DD690 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003903A0[];
extern char D_00217210[];
extern char D_00390340[];

int func_1DBEF0(void);
void func_1DD128(void *, int, int);

void *func_1DD690(void)
{
    if (*(int *)D_003903A0 == 0)
    {
        func_1DBEF0();
        func_1DD128((void *)D_003903A0, (int)D_00217210, (int)D_00390340);
    }
    return (void *)D_003903A0;
}
