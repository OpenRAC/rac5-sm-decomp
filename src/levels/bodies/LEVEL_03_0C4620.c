/* LEVEL_03:0x0C4620 -- placement copy of LEVEL_01_0C4838.c: sets four state bytes from a check and sets a fifth from a helper result on a global object. */

extern char D_0024FFC0[];
extern unsigned char D_00218C14;
extern unsigned char D_00218B2C;
extern unsigned char D_00218DE4;
extern unsigned char D_00218ECC;
extern unsigned char D_00218CFC;
extern char *D_0020C62C;

extern int func_036C78(char *a0);
extern int func_019460(int a0);

void func_0C4620(void)
{
    if (func_036C78(D_0024FFC0) != 0) {
        D_00218C14 = 0;
        D_00218B2C = 0;
        D_00218DE4 = 0;
        D_00218ECC = 0;
    } else {
        D_00218B2C = 1;
        D_00218DE4 = 1;
        D_00218ECC = 1;
        D_00218C14 = 1;
    }
    if (D_0020C62C != 0 && func_019460(*(int *)(D_0020C62C + 0x1C6C)) != 0) {
        D_00218CFC = 0;
    } else {
        D_00218CFC = 1;
    }
}
