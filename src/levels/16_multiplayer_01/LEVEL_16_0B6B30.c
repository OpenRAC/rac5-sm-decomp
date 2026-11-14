/* LEVEL_16:0x0B6B30 -- placement copy of LEVEL_01_0C7EC0.c: forwards the object to the shared handler: code 0x1D while the queue check is set and idle or the mode is not 1, otherwise runs the mode-1 step first and forwards code 0xF. */
extern int D_001AEC84;
extern unsigned char D_001AECA8;
extern int func_10FC58(int a);
extern int func_0A50B0(int index);
extern void func_111DB0(int *p, int a1);
void func_0B6B30(int *p)
{
    if (func_10FC58(0) != 0 && D_001AECA8 == 0) { func_111DB0(p, 0x1D); return; }
    if (D_001AEC84 == 1) { func_0A50B0(1); func_111DB0(p, 0xF); return; }
    func_111DB0(p, 0x1D);
}
