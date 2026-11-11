/* LEVEL_06:0x0BF138 -- placement copy of LEVEL_01_0C4838.c: sets four state bytes from a check and sets a fifth from a helper result on a global object. */

extern char D_00221EC0[];
extern unsigned char D_001EF494;
extern unsigned char D_001EF3AC;
extern unsigned char D_001EF664;
extern unsigned char D_001EF74C;
extern unsigned char D_001EF57C;
extern char *D_001E2EAC;

extern int func_035488(char *a0);
extern int func_017F00(int a0);

void func_0BF138(void)
{
    if (func_035488(D_00221EC0) != 0) {
        D_001EF494 = 0;
        D_001EF3AC = 0;
        D_001EF664 = 0;
        D_001EF74C = 0;
    } else {
        D_001EF3AC = 1;
        D_001EF664 = 1;
        D_001EF74C = 1;
        D_001EF494 = 1;
    }
    if (D_001E2EAC != 0 && func_017F00(*(int *)(D_001E2EAC + 0x1C6C)) != 0) {
        D_001EF57C = 0;
    } else {
        D_001EF57C = 1;
    }
}
