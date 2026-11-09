/* LEVEL_06:0x0A3310 -- placement copy of LEVEL_01_0A8B40.c: debug overlay: draws the status box and, when the tracked id is the expected one, prints three of its values. */
extern int D_001EAED4;
extern unsigned int D_001EAED8;
extern unsigned char D_001EACE4;
extern char D_00200200[];
extern char D_00200210[];
extern char D_00200220[];
extern char D_00200238[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0A9278(int a, unsigned int b, float c);
extern int func_0A9040(void);
extern void func_0A6C80(int a, int b, int c, int d, int e);
extern void func_0A3470(unsigned int v);
extern void func_0A4090(int a, int b, char *s);
extern int func_0A9090(int v);
extern void func_0AAA90(void);

void func_0A3310(void)
{
    char buf[256];

    func_0A9278(D_001EAED4, 0xFFFFFFFF, 0.0f);
    if (func_0A9040() != 0) {
        if (D_001EAED8 == 0xE0FFFFFF) {
            func_0A6C80(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
            func_0A3470(D_001EAED8);
            sprintf(buf, D_00200200, D_001EAED4);
            func_0A4090(0x20, 0xC8, buf);
            sprintf(buf, D_00200210, func_0A9090(D_001EAED4));
            func_0A4090(0x20, 0xD8, buf);
            sprintf(buf, D_00200220, func_0A9040());
            func_0A4090(0x20, 0xE8, buf);
        }
    } else {
        func_0A6C80(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
        func_0A4090(0x20, 0xC8, D_00200238);
    }
    if (D_001EACE4 != 0) {
        func_0AAA90();
    }
}
