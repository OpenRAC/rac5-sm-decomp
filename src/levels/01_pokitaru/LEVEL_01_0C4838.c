/* LEVEL_01:0x0C4838 -- sets four state bytes from a check and sets a fifth from a helper result on a global object. */

extern char D_00235140[];
extern unsigned char D_00200594;
extern unsigned char D_002004AC;
extern unsigned char D_00200764;
extern unsigned char D_0020084C;
extern unsigned char D_0020067C;
extern char *D_001F3FAC;

extern int func_038A38(char *a0);
extern int func_019650(int a0);

void func_0C4838(void)
{
    if (func_038A38(D_00235140) != 0) {
        D_00200594 = 0;
        D_002004AC = 0;
        D_00200764 = 0;
        D_0020084C = 0;
    } else {
        D_002004AC = 1;
        D_00200764 = 1;
        D_0020084C = 1;
        D_00200594 = 1;
    }
    if (D_001F3FAC != 0 && func_019650(*(int *)(D_001F3FAC + 0x1C6C)) != 0) {
        D_0020067C = 0;
    } else {
        D_0020067C = 1;
    }
}
