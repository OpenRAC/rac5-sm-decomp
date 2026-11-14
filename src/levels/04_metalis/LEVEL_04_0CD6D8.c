/* LEVEL_04:0x0CD6D8 -- placement copy of LEVEL_01_0C7EC0.c: forwards the object to the shared handler: code 0x1D while the queue check is set and idle or the mode is not 1, otherwise runs the mode-1 step first and forwards code 0xF. */
extern int D_0021A0CC;
extern unsigned char D_0021A0F0;
extern int func_13F260(int a);
extern int func_0BB828(int index);
extern void func_141B60(int *p, int a1);
void func_0CD6D8(int *p)
{
    if (func_13F260(0) != 0 && D_0021A0F0 == 0) { func_141B60(p, 0x1D); return; }
    if (D_0021A0CC == 1) { func_0BB828(1); func_141B60(p, 0xF); return; }
    func_141B60(p, 0x1D);
}
