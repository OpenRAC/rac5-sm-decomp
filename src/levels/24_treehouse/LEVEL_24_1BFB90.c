/* LEVEL_24:0x1BFB90 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00362D50[];
extern char D_001F7518[];
extern char D_00362D08[];

int func_1BF000(void);
void func_1BEA08(void *, int, int);

void *func_1BFB90(void)
{
    if (*(int *)D_00362D50 == 0)
    {
        func_1BF000();
        func_1BEA08((void *)D_00362D50, (int)D_001F7518, (int)D_00362D08);
    }
    return (void *)D_00362D50;
}
