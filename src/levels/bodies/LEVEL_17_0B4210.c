extern unsigned char D_001A2248[];
extern int D_001A221C;
extern int D_001A2220;

void func_10F170(void);

void func_0B4210(void)
{
    if (D_001A2248[0] != 0)
    {
        func_10F170();
    }
    D_001A2248[0] = 0;
    D_001A221C = 0;
    D_001A2220 = 0;
}
