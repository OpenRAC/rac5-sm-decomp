extern unsigned char D_002161E4;
extern char D_00343C60[];
extern void func_0BFE70(void);
extern void *memset(void *, int, unsigned int);

void func_0BFFA0(void)
{
    D_002161E4 = 0;
    func_0BFE70();
    memset(D_00343C60, 0, 0xff);
}
