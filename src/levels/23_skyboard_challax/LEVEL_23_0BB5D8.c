/* LEVEL_23:0x0BB5D8 -- placement copy of LEVEL_01_0C4838.c: sets four state bytes from a check and sets a fifth from a helper result on a global object. */

extern char D_002025C0[];
extern unsigned char D_001D3994;
extern unsigned char D_001D38AC;
extern unsigned char D_001D3B64;
extern unsigned char D_001D3C4C;
extern unsigned char D_001D3A7C;
extern char *D_001C73AC;

extern int func_031F68(char *a0);
extern int func_0182B8(int a0);

void func_0BB5D8(void)
{
    if (func_031F68(D_002025C0) != 0) {
        D_001D3994 = 0;
        D_001D38AC = 0;
        D_001D3B64 = 0;
        D_001D3C4C = 0;
    } else {
        D_001D38AC = 1;
        D_001D3B64 = 1;
        D_001D3C4C = 1;
        D_001D3994 = 1;
    }
    if (D_001C73AC != 0 && func_0182B8(*(int *)(D_001C73AC + 0x1C6C)) != 0) {
        D_001D3A7C = 0;
    } else {
        D_001D3A7C = 1;
    }
}
