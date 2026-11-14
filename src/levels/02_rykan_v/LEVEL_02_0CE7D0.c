/* LEVEL_02:0x0CE7D0 -- placement copy of LEVEL_01_0C7EC0.c: forwards the object to the shared handler: code 0x1D while the queue check is set and idle or the mode is not 1, otherwise runs the mode-1 step first and forwards code 0xF. */
extern int D_00215BCC;
extern unsigned char D_00215BF0;
extern int func_139190(int a);
extern int func_0BC930(int index);
extern void func_13BA90(int *p, int a1);
void func_0CE7D0(int *p)
{
    if (func_139190(0) != 0 && D_00215BF0 == 0) { func_13BA90(p, 0x1D); return; }
    if (D_00215BCC == 1) { func_0BC930(1); func_13BA90(p, 0xF); return; }
    func_13BA90(p, 0x1D);
}
