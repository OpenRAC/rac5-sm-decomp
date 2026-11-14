/* LEVEL_19:0x0B6408 -- placement copy of LEVEL_01_0C7EC0.c: forwards the object to the shared handler: code 0x1D while the queue check is set and idle or the mode is not 1, otherwise runs the mode-1 step first and forwards code 0xF. */
extern int D_001AFE04;
extern unsigned char D_001AFE28;
extern int func_1102F8(int a);
extern int func_0A4928(int index);
extern void func_112450(int *p, int a1);
void func_0B6408(int *p)
{
    if (func_1102F8(0) != 0 && D_001AFE28 == 0) { func_112450(p, 0x1D); return; }
    if (D_001AFE04 == 1) { func_0A4928(1); func_112450(p, 0xF); return; }
    func_112450(p, 0x1D);
}
