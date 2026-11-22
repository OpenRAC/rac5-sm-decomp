/* LEVEL_24:0x1BFC70 -- placement copy of FRONTEND_0257E8.c. */
extern char D_00362D70[];
extern char D_001F7548[];
extern char D_00362D08[];

int func_1BF000(void);
void func_1BEA08(void *, int, int);

void *func_1BFC70(void)
{
    if (*(int *)D_00362D70 == 0)
    {
        func_1BF000();
        func_1BEA08((void *)D_00362D70, (int)D_001F7548, (int)D_00362D08);
    }
    return (void *)D_00362D70;
}
