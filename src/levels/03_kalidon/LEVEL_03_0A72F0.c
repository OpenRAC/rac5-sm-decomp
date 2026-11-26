/* LEVEL_03:0x0A72F0 -- placement copy of LEVEL_01_0A7570.c: calls four helpers in order, passing one global pointer pair. */
extern void func_0A7098(void);
extern int func_0A6FD0(unsigned int, int);
extern int func_0A6A68(void);
extern int func_0A6450(unsigned int, unsigned int);
extern unsigned int D_0020EF60;
extern unsigned int D_0020EF64;

void func_0A72F0(int value, int unused)
{
    (void)unused;
    func_0A7098();
    func_0A6FD0(D_0020EF60, value);
    func_0A6A68();
    func_0A6450(D_0020EF60, D_0020EF64);
}
