/* LEVEL_23:0x0BEC60 -- placement copy of LEVEL_01_0C7EC0.c: forwards the object to the shared handler: code 0x1D while the queue check is set and idle or the mode is not 1, otherwise runs the mode-1 step first and forwards code 0xF. */
extern int D_001D400C;
extern unsigned char D_001D4030;
extern int func_124558(int a);
extern int func_0ACDE8(int index);
extern void func_126E58(int *p, int a1);
void func_0BEC60(int *p)
{
    if (func_124558(0) != 0 && D_001D4030 == 0) { func_126E58(p, 0x1D); return; }
    if (D_001D400C == 1) { func_0ACDE8(1); func_126E58(p, 0xF); return; }
    func_126E58(p, 0x1D);
}
