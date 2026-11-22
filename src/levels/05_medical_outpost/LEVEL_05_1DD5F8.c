/* LEVEL_05:0x1DD5F8 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00390390[];
extern char D_00217200[];
extern char D_00390340[];

int func_1DBEF0(void);
void func_1DD128(void *, int, int);

void *func_1DD5F8(void)
{
    if (*(int *)D_00390390 == 0)
    {
        func_1DBEF0();
        func_1DD128((void *)D_00390390, (int)D_00217200, (int)D_00390340);
    }
    return (void *)D_00390390;
}
