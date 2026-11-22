/* LEVEL_20:0x0FC468 -- placement copy of FRONTEND_0257E8.c. */
extern char D_002062E0[];
extern char D_00131B80[];
extern char D_00206280[];

int func_0FACC8(void);
void func_0FBF00(void *, int, int);

void *func_0FC468(void)
{
    if (*(int *)D_002062E0 == 0)
    {
        func_0FACC8();
        func_0FBF00((void *)D_002062E0, (int)D_00131B80, (int)D_00206280);
    }
    return (void *)D_002062E0;
}
