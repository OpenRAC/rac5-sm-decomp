/* LEVEL_07:0x0C9F20 -- placement copy of LEVEL_01_0C7EC0.c: forwards the object to the shared handler: code 0x1D while the queue check is set and idle or the mode is not 1, otherwise runs the mode-1 step first and forwards code 0xF. */
extern int D_00214F0C;
extern unsigned char D_00214F30;
extern int func_135DE0(int a);
extern int func_0B8080(int index);
extern void func_1386E0(int *p, int a1);
void func_0C9F20(int *p)
{
    if (func_135DE0(0) != 0 && D_00214F30 == 0) { func_1386E0(p, 0x1D); return; }
    if (D_00214F0C == 1) { func_0B8080(1); func_1386E0(p, 0xF); return; }
    func_1386E0(p, 0x1D);
}
