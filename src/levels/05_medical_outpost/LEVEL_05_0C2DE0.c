/* LEVEL_05:0x0C2DE0 -- placement copy of LEVEL_01_0C4838.c: sets four state bytes from a check and sets a fifth from a helper result on a global object. */

extern char D_00220E40[];
extern unsigned char D_001EF914;
extern unsigned char D_001EF82C;
extern unsigned char D_001EFAE4;
extern unsigned char D_001EFBCC;
extern unsigned char D_001EF9FC;
extern char *D_001E332C;

extern int func_036748(char *a0);
extern int func_018C90(int a0);

void func_0C2DE0(void)
{
    if (func_036748(D_00220E40) != 0) {
        D_001EF914 = 0;
        D_001EF82C = 0;
        D_001EFAE4 = 0;
        D_001EFBCC = 0;
    } else {
        D_001EF82C = 1;
        D_001EFAE4 = 1;
        D_001EFBCC = 1;
        D_001EF914 = 1;
    }
    if (D_001E332C != 0 && func_018C90(*(int *)(D_001E332C + 0x1C6C)) != 0) {
        D_001EF9FC = 0;
    } else {
        D_001EF9FC = 1;
    }
}
