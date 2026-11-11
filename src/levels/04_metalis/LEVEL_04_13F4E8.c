/* LEVEL_04:0x13F4E8 -- placement copy of FRONTEND_020A38.c: when a status byte is set, runs a status check and then either a main sequence of helper calls or a shorter fallback sequence. */

extern unsigned char D_00220478;

int func_13F3C8(void);
void func_13F640(void);
int func_13F460(void);
int func_13F4B8(int a0);
int func_0DCD00(int a0, int a1, int a2);
int func_13F198(void);
void func_13F390(void);
int func_13F418(void);
void func_13F3F8(void);

void func_13F4E8(void)
{
    int r;

    if (D_00220478 != 0) {
        if (func_13F3C8() != 0) {
            func_13F640();
            r = func_13F4B8(func_13F460());
            func_0DCD00(2, r, 0x21A);
            if (func_13F460() == 0x20000) {
                func_13F198();
            }
            func_13F390();
        } else {
            if (func_13F418() != 0) {
                func_0DCD00(2, 0xA6D, 0x21A);
                func_13F198();
                func_13F3F8();
            }
        }
    }
}
