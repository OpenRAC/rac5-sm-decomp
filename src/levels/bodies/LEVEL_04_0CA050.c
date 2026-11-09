/* LEVEL_04:0x0CA050 -- placement copy of LEVEL_01_0C4838.c: sets four state bytes from a check and sets a fifth from a helper result on a global object. */

extern char D_0024F950[];
extern unsigned char D_00219A54;
extern unsigned char D_0021996C;
extern unsigned char D_00219C24;
extern unsigned char D_00219D0C;
extern unsigned char D_00219B3C;
extern char *D_0020D12C;

extern int func_03A080(char *a0);
extern int func_019328(int a0);

void func_0CA050(void)
{
    if (func_03A080(D_0024F950) != 0) {
        D_00219A54 = 0;
        D_0021996C = 0;
        D_00219C24 = 0;
        D_00219D0C = 0;
    } else {
        D_0021996C = 1;
        D_00219C24 = 1;
        D_00219D0C = 1;
        D_00219A54 = 1;
    }
    if (D_0020D12C != 0 && func_019328(*(int *)(D_0020D12C + 0x1C6C)) != 0) {
        D_00219B3C = 0;
    } else {
        D_00219B3C = 1;
    }
}
