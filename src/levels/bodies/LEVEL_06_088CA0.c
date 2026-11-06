extern char D_00281B28[];
extern void *memset(void *, int, unsigned int);
extern void func_08A020(void);

void func_088CA0(void)
{
    memset(D_00281B28, 0, 0x3000);
    func_08A020();
}
