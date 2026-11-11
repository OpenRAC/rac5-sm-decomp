/* LEVEL_09:0x0C1AE8 -- placement copy of LEVEL_01_0C4838.c: sets four state bytes from a check and sets a fifth from a helper result on a global object. */

extern char D_0021C8C0[];
extern unsigned char D_001EA394;
extern unsigned char D_001EA2AC;
extern unsigned char D_001EA564;
extern unsigned char D_001EA64C;
extern unsigned char D_001EA47C;
extern char *D_001DDDAC;

extern int func_035240(char *a0);
extern int func_018AC0(int a0);

void func_0C1AE8(void)
{
    if (func_035240(D_0021C8C0) != 0) {
        D_001EA394 = 0;
        D_001EA2AC = 0;
        D_001EA564 = 0;
        D_001EA64C = 0;
    } else {
        D_001EA2AC = 1;
        D_001EA564 = 1;
        D_001EA64C = 1;
        D_001EA394 = 1;
    }
    if (D_001DDDAC != 0 && func_018AC0(*(int *)(D_001DDDAC + 0x1C6C)) != 0) {
        D_001EA47C = 0;
    } else {
        D_001EA47C = 1;
    }
}
