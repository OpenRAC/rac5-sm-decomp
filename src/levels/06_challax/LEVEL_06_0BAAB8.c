extern unsigned char D_001ECA64;
extern char D_00315B60[];
extern void func_0BA988(void);
extern void *memset(void *, int, unsigned int);

void func_0BAAB8(void)
{
    D_001ECA64 = 0;
    func_0BA988();
    memset(D_00315B60, 0, 0xff);
}
