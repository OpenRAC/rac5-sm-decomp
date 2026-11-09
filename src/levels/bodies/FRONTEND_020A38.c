/* FRONTEND:0x020A38 -- when a status byte is set, runs a status check and then either a main sequence of helper calls or a shorter fallback sequence. */

extern unsigned char D_00032820;

int func_020918(void);
void func_020B80(void);
int func_0209B0(void);
int func_020A08(int a0);
void func_015308(int a0, int a1, int a2);
int func_0206D8(void);
void func_0208E0(void);
int func_020968(void);
void func_020948(void);

void func_020A38(void)
{
    int r;

    if (D_00032820 != 0) {
        if (func_020918() != 0) {
            func_020B80();
            r = func_020A08(func_0209B0());
            func_015308(2, r, 0x21A);
            if (func_0209B0() == 0x20000) {
                func_0206D8();
            }
            func_0208E0();
        } else {
            if (func_020968() != 0) {
                func_015308(2, 0xA6D, 0x21A);
                func_0206D8();
                func_020948();
            }
        }
    }
}
