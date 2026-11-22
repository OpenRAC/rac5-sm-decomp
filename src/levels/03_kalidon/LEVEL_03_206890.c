/* LEVEL_03:0x206890 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B4150[];
extern char D_00246380[];
extern char D_003B4100[];

int func_205188(void);
void func_2063C0(void *, int, int);

void *func_206890(void)
{
    if (*(int *)D_003B4150 == 0)
    {
        func_205188();
        func_2063C0((void *)D_003B4150, (int)D_00246380, (int)D_003B4100);
    }
    return (void *)D_003B4150;
}
