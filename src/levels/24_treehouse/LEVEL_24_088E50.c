extern char D_00260C68[];
extern void *memset(void *, int, unsigned int);
extern void func_08A1D0(void);

void func_088E50(void)
{
    memset(D_00260C68, 0, 0x3000);
    func_08A1D0();
}
