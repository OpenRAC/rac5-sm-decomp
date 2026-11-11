extern int (*D_00200CCC)(void);
extern void (*D_00200CD0)(void);

void func_0C9340(void)
{
    if (D_00200CCC() != 0)
        D_00200CD0();
}
