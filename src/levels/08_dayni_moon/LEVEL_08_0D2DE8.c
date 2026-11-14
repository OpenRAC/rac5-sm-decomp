/* LEVEL_08:0x0D2DE8 -- placement copy of LEVEL_01_0C7EC0.c: forwards the object to the shared handler: code 0x1D while the queue check is set and idle or the mode is not 1, otherwise runs the mode-1 step first and forwards code 0xF. */
extern int D_00249ACC;
extern unsigned char D_00249AF0;
extern int func_144318(int a);
extern int func_0C0F10(int index);
extern void func_146C18(int *p, int a1);
void func_0D2DE8(int *p)
{
    if (func_144318(0) != 0 && D_00249AF0 == 0) { func_146C18(p, 0x1D); return; }
    if (D_00249ACC == 1) { func_0C0F10(1); func_146C18(p, 0xF); return; }
    func_146C18(p, 0x1D);
}
