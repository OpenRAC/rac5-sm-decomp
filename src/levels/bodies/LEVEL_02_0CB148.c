/* LEVEL_02:0x0CB148 -- placement copy of LEVEL_01_0C4838.c: sets four state bytes from a check and sets a fifth from a helper result on a global object. */

extern char D_0024C650[];
extern unsigned char D_00215554;
extern unsigned char D_0021546C;
extern unsigned char D_00215724;
extern unsigned char D_0021580C;
extern unsigned char D_0021563C;
extern char *D_00208C2C;

extern int func_03D480(char *a0);
extern int func_01A050(int a0);

void func_0CB148(void)
{
    if (func_03D480(D_0024C650) != 0) {
        D_00215554 = 0;
        D_0021546C = 0;
        D_00215724 = 0;
        D_0021580C = 0;
    } else {
        D_0021546C = 1;
        D_00215724 = 1;
        D_0021580C = 1;
        D_00215554 = 1;
    }
    if (D_00208C2C != 0 && func_01A050(*(int *)(D_00208C2C + 0x1C6C)) != 0) {
        D_0021563C = 0;
    } else {
        D_0021563C = 1;
    }
}
