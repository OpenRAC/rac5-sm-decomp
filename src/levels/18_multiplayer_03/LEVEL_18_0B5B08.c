/* LEVEL_18:0x0B5B08 -- placement copy of LEVEL_01_0C7EC0.c: forwards the object to the shared handler: code 0x1D while the queue check is set and idle or the mode is not 1, otherwise runs the mode-1 step first and forwards code 0xF. */
extern int D_001B0104;
extern unsigned char D_001B0128;
extern int func_10E908(int a);
extern int func_0A40A8(int index);
extern void func_110A60(int *p, int a1);
void func_0B5B08(int *p)
{
    if (func_10E908(0) != 0 && D_001B0128 == 0) { func_110A60(p, 0x1D); return; }
    if (D_001B0104 == 1) { func_0A40A8(1); func_110A60(p, 0xF); return; }
    func_110A60(p, 0x1D);
}
