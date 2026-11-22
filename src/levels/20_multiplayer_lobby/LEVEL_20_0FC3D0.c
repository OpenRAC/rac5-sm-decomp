/* LEVEL_20:0x0FC3D0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002062D0[];
extern char D_00131B70[];
extern char D_00206280[];

int func_0FACC8(void);
void func_0FBF00(void *, int, int);

void *func_0FC3D0(void)
{
    if (*(int *)D_002062D0 == 0)
    {
        func_0FACC8();
        func_0FBF00((void *)D_002062D0, (int)D_00131B70, (int)D_00206280);
    }
    return (void *)D_002062D0;
}
