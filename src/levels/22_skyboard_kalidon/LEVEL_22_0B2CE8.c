/* LEVEL_22:0x0B2CE8 -- placement copy of LEVEL_01_0C4838.c: sets four state bytes from a check and sets a fifth from a helper result on a global object. */

extern char D_00186D40[];
extern unsigned char D_0015F914;
extern unsigned char D_0015F82C;
extern unsigned char D_0015FAE4;
extern unsigned char D_0015FBCC;
extern unsigned char D_0015F9FC;
extern char *D_0015332C;

extern int func_02E988(char *a0);
extern int func_015DC0(int a0);

void func_0B2CE8(void)
{
    if (func_02E988(D_00186D40) != 0) {
        D_0015F914 = 0;
        D_0015F82C = 0;
        D_0015FAE4 = 0;
        D_0015FBCC = 0;
    } else {
        D_0015F82C = 1;
        D_0015FAE4 = 1;
        D_0015FBCC = 1;
        D_0015F914 = 1;
    }
    if (D_0015332C != 0 && func_015DC0(*(int *)(D_0015332C + 0x1C6C)) != 0) {
        D_0015F9FC = 0;
    } else {
        D_0015F9FC = 1;
    }
}
