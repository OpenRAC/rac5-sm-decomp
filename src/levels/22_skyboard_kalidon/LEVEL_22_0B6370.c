/* LEVEL_22:0x0B6370 -- placement copy of LEVEL_01_0C7EC0.c: forwards the object to the shared handler: code 0x1D while the queue check is set and idle or the mode is not 1, otherwise runs the mode-1 step first and forwards code 0xF. */
extern int D_0015FF8C;
extern unsigned char D_0015FFB0;
extern int func_10A2B0(int a);
extern int func_0A4570(int index);
extern void func_10CBB0(int *p, int a1);
void func_0B6370(int *p)
{
    if (func_10A2B0(0) != 0 && D_0015FFB0 == 0) { func_10CBB0(p, 0x1D); return; }
    if (D_0015FF8C == 1) { func_0A4570(1); func_10CBB0(p, 0xF); return; }
    func_10CBB0(p, 0x1D);
}
