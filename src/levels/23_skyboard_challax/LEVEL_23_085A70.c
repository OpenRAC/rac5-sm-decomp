extern char D_002661E8[];
extern void *memset(void *, int, unsigned int);
extern void func_086DF0(void);

void func_085A70(void)
{
    memset(D_002661E8, 0, 0x3000);
    func_086DF0();
}
