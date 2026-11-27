/* LEVEL_06:0x0C2AF0 -- placement copy of FRONTEND_018228.c: picks the next menu step for the object from the feature flag and the shared checks. */
extern unsigned char D_001EFB32;
extern unsigned char D_001EFAD0;
extern int func_1292C8(int a);
extern int func_128B80(int id);
extern void func_0D1850(int a, int b, int c, int d);
extern void func_0D1888(int a);
extern int func_129378(void);
extern int func_129EB8(void);
extern int func_129460(void);
extern int func_0D2360(void);
extern void func_129688(void);
extern int func_1293E8(void);
extern void func_1296E0(int value);
extern void func_12BDB0(int *p, int a1);

void func_0C2AF0(int *o)
{
    if (D_001EFB32 == 0) {
        func_12BDB0(o, 0x1D);
        return;
    }
    if (func_1292C8(1) != 0) {
        func_0D1850(0, func_128B80(0xA5D), 0, 0);
        func_0D1888(5);
        return;
    }
    if (func_129378() == 0) {
        if (func_129EB8() != 0) {
            D_001EFAD0 = 0;
            func_129460();
            func_0D2360();
        }
        func_12BDB0(o, 0x1F);
    } else {
        func_129688();
        func_1293E8();
        func_12BDB0(o, 0x11);
        return;
    }
    func_1296E0(1);
}
