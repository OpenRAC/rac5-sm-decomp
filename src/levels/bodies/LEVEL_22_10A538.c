/* LEVEL_22:0x10A538 -- placement copy of FRONTEND_020A38.c: when a status byte is set, runs a status check and then either a main sequence of helper calls or a shorter fallback sequence. */

extern unsigned char D_00166038;

int func_10A418(void);
void func_10A690(void);
int func_10A4B0(void);
int func_10A508(int a0);
void func_0C5980(int a0, int a1, int a2);
int func_10A1E8(void);
void func_10A3E0(void);
int func_10A468(void);
void func_10A448(void);

void func_10A538(void)
{
    int r;

    if (D_00166038 != 0) {
        if (func_10A418() != 0) {
            func_10A690();
            r = func_10A508(func_10A4B0());
            func_0C5980(2, r, 0x21A);
            if (func_10A4B0() == 0x20000) {
                func_10A1E8();
            }
            func_10A3E0();
        } else {
            if (func_10A468() != 0) {
                func_0C5980(2, 0xA6D, 0x21A);
                func_10A1E8();
                func_10A448();
            }
        }
    }
}
