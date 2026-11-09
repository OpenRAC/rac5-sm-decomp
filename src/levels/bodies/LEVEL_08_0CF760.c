/* LEVEL_08:0x0CF760 -- placement copy of LEVEL_01_0C4838.c: sets four state bytes from a check and sets a fifth from a helper result on a global object. */

extern char D_002843D0[];
extern unsigned char D_00249454;
extern unsigned char D_0024936C;
extern unsigned char D_00249624;
extern unsigned char D_0024970C;
extern unsigned char D_0024953C;
extern char *D_0023CB2C;

extern int func_03DB08(char *a0);
extern int func_01A040(int a0);

void func_0CF760(void)
{
    if (func_03DB08(D_002843D0) != 0) {
        D_00249454 = 0;
        D_0024936C = 0;
        D_00249624 = 0;
        D_0024970C = 0;
    } else {
        D_0024936C = 1;
        D_00249624 = 1;
        D_0024970C = 1;
        D_00249454 = 1;
    }
    if (D_0023CB2C != 0 && func_01A040(*(int *)(D_0023CB2C + 0x1C6C)) != 0) {
        D_0024953C = 0;
    } else {
        D_0024953C = 1;
    }
}
