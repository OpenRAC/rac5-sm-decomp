/* FRONTEND:0x017EE0 -- callback: picks the menu event code from the saved mode flags (0x1D by default, 0x1E when the option byte is set, 0xF with a sound when the mode word is 1). */
extern unsigned char D_000304B0;
extern int D_0003048C;
extern int func_0207B0(int unused);
extern int func_0145C8(int index);
extern void func_0229A0(int *p, int a1);

void func_017EE0(int *o)
{
    if (func_0207B0(0)) {
        if (D_000304B0 == 0) {
            func_0229A0(o, 0x1D);
            return;
        }
    }
    if (D_0003048C == 1) {
        func_0145C8(1);
        func_0229A0(o, 0xF);
    } else if (D_000304B0 != 0) {
        func_0229A0(o, 0x1E);
    } else {
        func_0229A0(o, 0x1D);
    }
}
