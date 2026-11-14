/* LEVEL_17:0x0B6070 -- placement copy of LEVEL_01_0C7EC0.c: forwards the object to the shared handler: code 0x1D while the queue check is set and idle or the mode is not 1, otherwise runs the mode-1 step first and forwards code 0xF. */
extern int D_001A2284;
extern unsigned char D_001A22A8;
extern int func_10F1D0(int a);
extern int func_0A4590(int index);
extern void func_111328(int *p, int a1);
void func_0B6070(int *p)
{
    if (func_10F1D0(0) != 0 && D_001A22A8 == 0) { func_111328(p, 0x1D); return; }
    if (D_001A2284 == 1) { func_0A4590(1); func_111328(p, 0xF); return; }
    func_111328(p, 0x1D);
}
