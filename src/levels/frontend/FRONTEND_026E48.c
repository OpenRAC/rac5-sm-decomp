/* FRONTEND:0x026E48 -- placement copy of FRONTEND_0257E8.c. */
extern char D_001EF3C0[];
extern char D_0010A220[];
extern char D_001EF370[];

int func_025880(void);
void func_0268E0(void *, int, int);

void *func_026E48(void)
{
    if (*(int *)D_001EF3C0 == 0)
    {
        func_025880();
        func_0268E0((void *)D_001EF3C0, (int)D_0010A220, (int)D_001EF370);
    }
    return (void *)D_001EF3C0;
}
