/* FRONTEND:0x027988 -- placement copy of FRONTEND_0257E8.c. */
extern char D_001EF3D0[];
extern char D_0010A348[];
extern char D_001EF3A8[];

int func_026ED8(void);
void func_0268E0(void *, int, int);

void *func_027988(void)
{
    if (*(int *)D_001EF3D0 == 0)
    {
        func_026ED8();
        func_0268E0((void *)D_001EF3D0, (int)D_0010A348, (int)D_001EF3A8);
    }
    return (void *)D_001EF3D0;
}
