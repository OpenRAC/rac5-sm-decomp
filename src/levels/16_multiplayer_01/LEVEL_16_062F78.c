extern int D_001A3AC0;
extern char D_001A24C0[];
extern void *memset(void *, int, unsigned int);

void func_062F78(void)
{
    D_001A3AC0 = 0;
    memset(D_001A24C0, 0, 0x1600);
}
