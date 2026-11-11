/* LEVEL_08:0x0D2F08 -- placement copy of LEVEL_01_0C7FE0.c: picks the handler entry from the global mode and the flag byte, noting entry 29 in a global when the flag is set. */
extern int D_00249ACC;
extern unsigned char D_00249A70;
extern int D_00249AD4;
extern void func_146C18(int *p, int a1);

void func_0D2F08(int *p)
{
    if (D_00249ACC == 1) {
        func_146C18(p, 12);
    } else if (D_00249A70 != 0) {
        D_00249AD4 = 29;
        func_146C18(p, 19);
    } else {
        func_146C18(p, 30);
    }
}
