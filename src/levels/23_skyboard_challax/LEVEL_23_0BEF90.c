/* LEVEL_23:0x0BEF90 -- placement copy of FRONTEND_018228.c: picks the next menu step for the object from the feature flag and the shared checks. */
extern unsigned char D_001D4032;
extern unsigned char D_001D3FD0;
extern int func_124370(int a);
extern int func_123C28(int id);
extern void func_0CDD80(int a, int b, int c, int d);
extern void func_0CDDB8(int a);
extern int func_124420(void);
extern int func_124F60(void);
extern int func_124508(void);
extern int func_0CE890(void);
extern void func_124730(void);
extern int func_124490(void);
extern void func_124788(int value);
extern void func_126E58(int *p, int a1);

void func_0BEF90(int *o)
{
    if (D_001D4032 == 0) {
        func_126E58(o, 0x1D);
        return;
    }
    if (func_124370(1) != 0) {
        func_0CDD80(0, func_123C28(0xA5D), 0, 0);
        func_0CDDB8(5);
        return;
    }
    if (func_124420() == 0) {
        if (func_124F60() != 0) {
            D_001D3FD0 = 0;
            func_124508();
            func_0CE890();
        }
        func_126E58(o, 0x1F);
    } else {
        func_124730();
        func_124490();
        func_126E58(o, 0x11);
        return;
    }
    func_124788(1);
}
