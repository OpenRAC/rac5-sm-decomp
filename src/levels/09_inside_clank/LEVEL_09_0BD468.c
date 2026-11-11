extern unsigned char D_001E7964;
extern char D_00310560[];
extern void func_0BD338(void);
extern void *memset(void *, int, unsigned int);

void func_0BD468(void)
{
    D_001E7964 = 0;
    func_0BD338();
    memset(D_00310560, 0, 0xff);
}
