/* LEVEL_24:0x1BFAB0 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00362D30[];
extern char D_001F74E8[];
extern char D_00362D08[];

int func_1BF000(void);
void func_1BEA08(void *, int, int);

void *func_1BFAB0(void)
{
    if (*(int *)D_00362D30 == 0)
    {
        func_1BF000();
        func_1BEA08((void *)D_00362D30, (int)D_001F74E8, (int)D_00362D08);
    }
    return (void *)D_00362D30;
}
