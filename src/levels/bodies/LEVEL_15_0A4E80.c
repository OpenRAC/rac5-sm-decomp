/* LEVEL_15:0x0A4E80 -- placement copy of LEVEL_01_0C4838.c: sets four state bytes from a check and sets a fifth from a helper result on a global object. */

extern char D_0017D2C0[];
extern unsigned char D_00155214;
extern unsigned char D_0015512C;
extern unsigned char D_001553E4;
extern unsigned char D_001554CC;
extern unsigned char D_001552FC;
extern char *D_00148C2C;

extern int func_02E170(char *a0);
extern int func_015998(int a0);

void func_0A4E80(void)
{
    if (func_02E170(D_0017D2C0) != 0) {
        D_00155214 = 0;
        D_0015512C = 0;
        D_001553E4 = 0;
        D_001554CC = 0;
    } else {
        D_0015512C = 1;
        D_001553E4 = 1;
        D_001554CC = 1;
        D_00155214 = 1;
    }
    if (D_00148C2C != 0 && func_015998(*(int *)(D_00148C2C + 0x1C6C)) != 0) {
        D_001552FC = 0;
    } else {
        D_001552FC = 1;
    }
}
