/* LEVEL_01:0x0C7FE0 -- picks the handler entry from the global mode and the flag byte, noting entry 29 in a global when the flag is set. */
extern int D_00200C0C;
extern unsigned char D_00200BB0;
extern int D_00200C14;
extern void func_1356E0(int *p, int a1);

void func_0C7FE0(int *p)
{
    if (D_00200C0C == 1) {
        func_1356E0(p, 12);
    } else if (D_00200BB0 != 0) {
        D_00200C14 = 29;
        func_1356E0(p, 19);
    } else {
        func_1356E0(p, 30);
    }
}
