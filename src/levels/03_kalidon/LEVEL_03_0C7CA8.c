/* LEVEL_03:0x0C7CA8 -- placement copy of LEVEL_01_0C7EC0.c: forwards the object to the shared handler: code 0x1D while the queue check is set and idle or the mode is not 1, otherwise runs the mode-1 step first and forwards code 0xF. */
extern int D_0021928C;
extern unsigned char D_002192B0;
extern int func_1311A8(int a);
extern int func_0B5E08(int index);
extern void func_133AA8(int *p, int a1);
void func_0C7CA8(int *p)
{
    if (func_1311A8(0) != 0 && D_002192B0 == 0) { func_133AA8(p, 0x1D); return; }
    if (D_0021928C == 1) { func_0B5E08(1); func_133AA8(p, 0xF); return; }
    func_133AA8(p, 0x1D);
}
