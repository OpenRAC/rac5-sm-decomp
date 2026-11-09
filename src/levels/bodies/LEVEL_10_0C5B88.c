/* LEVEL_10:0x0C5B88 -- placement copy of LEVEL_01_0C4838.c: sets four state bytes from a check and sets a fifth from a helper result on a global object. */

extern char D_0023E540[];
extern unsigned char D_00209594;
extern unsigned char D_002094AC;
extern unsigned char D_00209764;
extern unsigned char D_0020984C;
extern unsigned char D_0020967C;
extern char *D_001FCFAC;

extern int func_0373E8(char *a0);
extern int func_018CE8(int a0);

void func_0C5B88(void)
{
    if (func_0373E8(D_0023E540) != 0) {
        D_00209594 = 0;
        D_002094AC = 0;
        D_00209764 = 0;
        D_0020984C = 0;
    } else {
        D_002094AC = 1;
        D_00209764 = 1;
        D_0020984C = 1;
        D_00209594 = 1;
    }
    if (D_001FCFAC != 0 && func_018CE8(*(int *)(D_001FCFAC + 0x1C6C)) != 0) {
        D_0020967C = 0;
    } else {
        D_0020967C = 1;
    }
}
