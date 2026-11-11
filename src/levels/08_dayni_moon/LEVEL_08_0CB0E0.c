extern unsigned char D_00246A24;
extern char D_00378060[];
extern void func_0CAFB0(void);
extern void *memset(void *, int, unsigned int);

void func_0CB0E0(void)
{
    D_00246A24 = 0;
    func_0CAFB0();
    memset(D_00378060, 0, 0xff);
}
