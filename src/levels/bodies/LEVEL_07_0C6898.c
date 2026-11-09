/* LEVEL_07:0x0C6898 -- placement copy of LEVEL_01_0C4838.c: sets four state bytes from a check and sets a fifth from a helper result on a global object. */

extern char D_0024AA40[];
extern unsigned char D_00214894;
extern unsigned char D_002147AC;
extern unsigned char D_00214A64;
extern unsigned char D_00214B4C;
extern unsigned char D_0021497C;
extern char *D_002082AC;

extern int func_038F68(char *a0);
extern int func_019DC0(int a0);

void func_0C6898(void)
{
    if (func_038F68(D_0024AA40) != 0) {
        D_00214894 = 0;
        D_002147AC = 0;
        D_00214A64 = 0;
        D_00214B4C = 0;
    } else {
        D_002147AC = 1;
        D_00214A64 = 1;
        D_00214B4C = 1;
        D_00214894 = 1;
    }
    if (D_002082AC != 0 && func_019DC0(*(int *)(D_002082AC + 0x1C6C)) != 0) {
        D_0021497C = 0;
    } else {
        D_0021497C = 1;
    }
}
