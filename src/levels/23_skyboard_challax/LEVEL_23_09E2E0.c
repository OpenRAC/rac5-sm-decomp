/* LEVEL_23:0x09E2E0 -- placement copy of LEVEL_01_0A7570.c: calls four helpers in order, passing one global pointer pair. */
extern void func_09E088(void);
extern int func_09DFC0(unsigned int, int);
extern int func_09DA58(void);
extern int func_09D440(unsigned int, unsigned int);
extern unsigned int D_001C9CE0;
extern unsigned int D_001C9CE4;

void func_09E2E0(int value, int unused)
{
    (void)unused;
    func_09E088();
    func_09DFC0(D_001C9CE0, value);
    func_09DA58();
    func_09D440(D_001C9CE0, D_001C9CE4);
}
