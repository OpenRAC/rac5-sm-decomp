/* LEVEL_20:0x0A1060 -- placement copy of LEVEL_01_0C7EC0.c: forwards the object to the shared handler: code 0x1D while the queue check is set and idle or the mode is not 1, otherwise runs the mode-1 step first and forwards code 0xF. */
extern int D_00111364;
extern unsigned char D_00111388;
extern int func_0E2A40(int a);
extern int func_08F6B0(int index);
extern void func_0E4B98(int *p, int a1);
void func_0A1060(int *p)
{
    if (func_0E2A40(0) != 0 && D_00111388 == 0) { func_0E4B98(p, 0x1D); return; }
    if (D_00111364 == 1) { func_08F6B0(1); func_0E4B98(p, 0xF); return; }
    func_0E4B98(p, 0x1D);
}
