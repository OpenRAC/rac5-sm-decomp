/* LEVEL_10:0x0C8020 -- stores five request values and starts request 0x38 unless it is already active. */
extern unsigned char D_00209CC0;
extern int D_00209BA0;
extern unsigned char D_00209BB0;
extern int D_00209BB4;
extern int D_00209BB8;
extern int D_00209BBC;
extern int D_00209BC0;
extern int D_00209BC4;
extern int func_019EE8(int a);
extern int func_0BD078(void);
extern int func_0BD748(int a, int b);

void func_0C8020(int a, int b, int c, int d, int e)
{
    if (D_00209CC0 == 0 || func_019EE8(6) == 0 || func_0BD078() != 0x38) {
        D_00209BB0 = 1;
        D_00209BB4 = a;
        D_00209BB8 = b;
        D_00209BBC = c;
        D_00209BC0 = d;
        D_00209BC4 = e;
        D_00209BA0 = 3;
        func_0BD748(0x38, 0);
    }
}
