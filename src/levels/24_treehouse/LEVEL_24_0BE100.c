/* LEVEL_24:0x0BE100 -- placement copy of LEVEL_01_0C4838.c: sets four state bytes from a check and sets a fifth from a helper result on a global object. */

extern char D_00201040[];
extern unsigned char D_001D1214;
extern unsigned char D_001D112C;
extern unsigned char D_001D13E4;
extern unsigned char D_001D14CC;
extern unsigned char D_001D12FC;
extern char *D_001C4C2C;

extern int func_031B30(char *a0);
extern int func_017D98(int a0);

void func_0BE100(void)
{
    if (func_031B30(D_00201040) != 0) {
        D_001D1214 = 0;
        D_001D112C = 0;
        D_001D13E4 = 0;
        D_001D14CC = 0;
    } else {
        D_001D112C = 1;
        D_001D13E4 = 1;
        D_001D14CC = 1;
        D_001D1214 = 1;
    }
    if (D_001C4C2C != 0 && func_017D98(*(int *)(D_001C4C2C + 0x1C6C)) != 0) {
        D_001D12FC = 0;
    } else {
        D_001D12FC = 1;
    }
}
