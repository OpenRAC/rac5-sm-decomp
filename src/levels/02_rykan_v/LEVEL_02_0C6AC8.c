extern unsigned char D_00212B24;
extern char D_003402E0[];
extern void func_0C6998(void);
extern void *memset(void *, int, unsigned int);

void func_0C6AC8(void)
{
    D_00212B24 = 0;
    func_0C6998();
    memset(D_003402E0, 0, 0xff);
}
