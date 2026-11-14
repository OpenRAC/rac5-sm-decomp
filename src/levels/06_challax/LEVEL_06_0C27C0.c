/* LEVEL_06:0x0C27C0 -- placement copy of LEVEL_01_0C7EC0.c: forwards the object to the shared handler: code 0x1D while the queue check is set and idle or the mode is not 1, otherwise runs the mode-1 step first and forwards code 0xF. */
extern int D_001EFB0C;
extern unsigned char D_001EFB30;
extern int func_1294B0(int a);
extern int func_0B0848(int index);
extern void func_12BDB0(int *p, int a1);
void func_0C27C0(int *p)
{
    if (func_1294B0(0) != 0 && D_001EFB30 == 0) { func_12BDB0(p, 0x1D); return; }
    if (D_001EFB0C == 1) { func_0B0848(1); func_12BDB0(p, 0xF); return; }
    func_12BDB0(p, 0x1D);
}
