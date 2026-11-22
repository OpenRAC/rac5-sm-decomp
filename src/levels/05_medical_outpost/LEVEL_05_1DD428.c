/* LEVEL_05:0x1DD428 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00390358[];
extern char D_002171B8[];
extern char D_00390368[];

void *func_1DD540(void);
void func_1DD128(void *, int, int);

void *func_1DD428(void)
{
    if (*(int *)D_00390358 == 0)
    {
        func_1DD540();
        func_1DD128((void *)D_00390358, (int)D_002171B8, (int)D_00390368);
    }
    return (void *)D_00390358;
}
