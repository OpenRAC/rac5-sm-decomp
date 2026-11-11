/* LEVEL_02:0x0CDD60 -- placement copy of LEVEL_01_0C7450.c: forwards the object to the shared handler with a fixed code when the mode is 1 (raising its flag), else with the stored code. */
extern int D_00215BCC;
extern unsigned char D_00215B71;
extern int D_00215BD4;
extern void func_13BA90(int *p, int a1);

void func_0CDD60(int *p)
{
    if (D_00215BCC == 1) {
        D_00215B71 = 1;
        func_13BA90(p, 0x1F);
    } else {
        func_13BA90(p, D_00215BD4);
    }
}
