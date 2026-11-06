extern char D_001E1510[];
extern char D_001C2760[];
extern void func_10EA48(void *, void *, int, void *);

void func_02CDA8(void)
{
    func_10EA48(D_001E1510, D_001E1510 + 12, 0x800, D_001C2760);
}
