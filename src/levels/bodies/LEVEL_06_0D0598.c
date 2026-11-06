extern unsigned int func_0D1358(void);
extern unsigned char D_001F3DF4;
extern unsigned char D_001F3DF5;
extern void func_12C5E8(int);
extern void func_125368(int);
extern void func_12C5E0(int);
extern void func_0D1630(int);
extern void func_019028(int, int);
extern void func_0D1888(int);

void func_0D0598(void)
{
    switch (func_0D1358()) {
    case 2:
        func_0D1630(0);
        break;
    case 1:
        if (D_001F3DF4 != 0) {
            func_12C5E8(0);
        } else if (D_001F3DF5 != 0) {
            func_125368(0);
            func_12C5E0(0);
        }
        func_0D1630(0);
        func_019028(4, 0);
        break;
    case 0:
    default:
        func_0D1888(2);
        break;
    }
}
