/* LEVEL_05:0x0C6468 -- placement copy of LEVEL_01_0C7EC0.c: forwards the object to the shared handler: code 0x1D while the queue check is set and idle or the mode is not 1, otherwise runs the mode-1 step first and forwards code 0xF. */
extern int D_001EFF8C;
extern unsigned char D_001EFFB0;
extern int func_12E758(int a);
extern int func_0B45C8(int index);
extern void func_131058(int *p, int a1);
void func_0C6468(int *p)
{
    if (func_12E758(0) != 0 && D_001EFFB0 == 0) { func_131058(p, 0x1D); return; }
    if (D_001EFF8C == 1) { func_0B45C8(1); func_131058(p, 0xF); return; }
    func_131058(p, 0x1D);
}
