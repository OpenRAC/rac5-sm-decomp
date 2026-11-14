/* LEVEL_24:0x0C1788 -- placement copy of LEVEL_01_0C7EC0.c: forwards the object to the shared handler: code 0x1D while the queue check is set and idle or the mode is not 1, otherwise runs the mode-1 step first and forwards code 0xF. */
extern int D_001D188C;
extern unsigned char D_001D18B0;
extern int func_1288E0(int a);
extern int func_0AF8B0(int index);
extern void func_12B1E0(int *p, int a1);
void func_0C1788(int *p)
{
    if (func_1288E0(0) != 0 && D_001D18B0 == 0) { func_12B1E0(p, 0x1D); return; }
    if (D_001D188C == 1) { func_0AF8B0(1); func_12B1E0(p, 0xF); return; }
    func_12B1E0(p, 0x1D);
}
