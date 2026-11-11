/* LEVEL_02:0x0CE8F0 -- placement copy of LEVEL_01_0C7FE0.c: picks the handler entry from the global mode and the flag byte, noting entry 29 in a global when the flag is set. */
extern int D_00215BCC;
extern unsigned char D_00215B70;
extern int D_00215BD4;
extern void func_13BA90(int *p, int a1);

void func_0CE8F0(int *p)
{
    if (D_00215BCC == 1) {
        func_13BA90(p, 12);
    } else if (D_00215B70 != 0) {
        D_00215BD4 = 29;
        func_13BA90(p, 19);
    } else {
        func_13BA90(p, 30);
    }
}
