/* LEVEL_10:0x0C9300 -- placement copy of LEVEL_01_0C7EC0.c: forwards the object to the shared handler: code 0x1D while the queue check is set and idle or the mode is not 1, otherwise runs the mode-1 step first and forwards code 0xF. */
extern int D_00209C0C;
extern unsigned char D_00209C30;
extern int func_130C40(int a);
extern int func_0B71F8(int index);
extern void func_133560(int *p, int a1);
void func_0C9300(int *p)
{
    if (func_130C40(0) != 0 && D_00209C30 == 0) { func_133560(p, 0x1D); return; }
    if (D_00209C0C == 1) { func_0B71F8(1); func_133560(p, 0xF); return; }
    func_133560(p, 0x1D);
}
