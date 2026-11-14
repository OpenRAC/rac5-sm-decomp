/* LEVEL_01:0x0C7EC0 -- forwards the object to the shared handler: code 0x1D while the queue check is set and idle or the mode is not 1, otherwise runs the mode-1 step first and forwards code 0xF. */
extern int D_00200C0C;
extern unsigned char D_00200C30;
extern int func_132DE0(int a);
extern int func_0B6020(int index);
extern void func_1356E0(int *p, int a1);
void func_0C7EC0(int *p)
{
    if (func_132DE0(0) != 0 && D_00200C30 == 0) { func_1356E0(p, 0x1D); return; }
    if (D_00200C0C == 1) { func_0B6020(1); func_1356E0(p, 0xF); return; }
    func_1356E0(p, 0x1D);
}
