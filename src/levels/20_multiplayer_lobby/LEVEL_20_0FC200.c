/* LEVEL_20:0x0FC200 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00206298[];
extern char D_00131B28[];
extern char D_002062A8[];

void *func_0FC318(void);
void func_0FBF00(void *, int, int);

void *func_0FC200(void)
{
    if (*(int *)D_00206298 == 0)
    {
        func_0FC318();
        func_0FBF00((void *)D_00206298, (int)D_00131B28, (int)D_002062A8);
    }
    return (void *)D_00206298;
}
