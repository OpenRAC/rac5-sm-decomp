/* LEVEL_03:0x206750 -- placement copy of FRONTEND_0257E8.c. */
extern char D_003B4138[];
extern char D_00246350[];
extern char D_003B4128[];

void *func_2067D8(void);
void func_2063C0(void *, int, int);

void *func_206750(void)
{
    if (*(int *)D_003B4138 == 0)
    {
        func_2067D8();
        func_2063C0((void *)D_003B4138, (int)D_00246350, (int)D_003B4128);
    }
    return (void *)D_003B4138;
}
