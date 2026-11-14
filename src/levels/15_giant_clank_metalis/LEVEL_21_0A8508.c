/* LEVEL_21:0x0A8508 -- placement copy of LEVEL_01_0C7EC0.c: forwards the object to the shared handler: code 0x1D while the queue check is set and idle or the mode is not 1, otherwise runs the mode-1 step first and forwards code 0xF. */
extern int D_0015588C;
extern unsigned char D_001558B0;
extern int func_0F1CA8(int a);
extern int func_096530(int index);
extern void func_0F45A8(int *p, int a1);
void func_0A8508(int *p)
{
    if (func_0F1CA8(0) != 0 && D_001558B0 == 0) { func_0F45A8(p, 0x1D); return; }
    if (D_0015588C == 1) { func_096530(1); func_0F45A8(p, 0xF); return; }
    func_0F45A8(p, 0x1D);
}
