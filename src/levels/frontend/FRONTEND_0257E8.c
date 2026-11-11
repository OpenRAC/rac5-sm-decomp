extern char D_001EF360[];
extern char D_0010A038[];
extern char D_001EF370[];

void func_025880(void);
void func_0268E0(void *, int, int);

void *func_0257E8(void)
{
    if (*(int *)D_001EF360 == 0)
    {
        func_025880();
        func_0268E0((void *)D_001EF360, (int)D_0010A038, (int)D_001EF370);
    }
    return (void *)D_001EF360;
}
