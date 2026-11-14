/* LEVEL_09:0x0C5170 -- placement copy of LEVEL_01_0C7EC0.c: forwards the object to the shared handler: code 0x1D while the queue check is set and idle or the mode is not 1, otherwise runs the mode-1 step first and forwards code 0xF. */
extern int D_001EAA0C;
extern unsigned char D_001EAA30;
extern int func_12BD78(int a);
extern int func_0B32D0(int index);
extern void func_12E678(int *p, int a1);
void func_0C5170(int *p)
{
    if (func_12BD78(0) != 0 && D_001EAA30 == 0) { func_12E678(p, 0x1D); return; }
    if (D_001EAA0C == 1) { func_0B32D0(1); func_12E678(p, 0xF); return; }
    func_12E678(p, 0x1D);
}
