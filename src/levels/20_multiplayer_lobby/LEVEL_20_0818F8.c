/* LEVEL_20:0x0818F8 -- placement copy of LEVEL_01_0A8B40.c: debug overlay: draws the status box and, when the tracked id is the expected one, prints three of its values. */
extern int D_0010C674;
extern unsigned int D_0010C678;
extern unsigned char D_0010C484;
extern char D_00127130[];
extern char D_00127140[];
extern char D_00127150[];
extern char D_00127168[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_087890(int a, unsigned int b, float c);
extern int func_087658(void);
extern void func_085298(int a, int b, int c, int d, int e);
extern void func_081A58(unsigned int v);
extern void func_0826A8(int a, int b, char *s);
extern int func_0876A8(int v);
extern void func_089190(void);

void func_0818F8(void)
{
    char buf[256];

    func_087890(D_0010C674, 0xFFFFFFFF, 0.0f);
    if (func_087658() != 0) {
        if (D_0010C678 == 0xE0FFFFFF) {
            func_085298(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
            func_081A58(D_0010C678);
            sprintf(buf, D_00127130, D_0010C674);
            func_0826A8(0x20, 0xC8, buf);
            sprintf(buf, D_00127140, func_0876A8(D_0010C674));
            func_0826A8(0x20, 0xD8, buf);
            sprintf(buf, D_00127150, func_087658());
            func_0826A8(0x20, 0xE8, buf);
        }
    } else {
        func_085298(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
        func_0826A8(0x20, 0xC8, D_00127168);
    }
    if (D_0010C484 != 0) {
        func_089190();
    }
}
