/* LEVEL_05:0x0A7100 -- placement copy of LEVEL_01_0A8B40.c: debug overlay: draws the status box and, when the tracked id is the expected one, prints three of its values. */
extern int D_001EB354;
extern unsigned int D_001EB358;
extern unsigned char D_001EB164;
extern char D_00200280[];
extern char D_00200290[];
extern char D_002002A0[];
extern char D_002002B8[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0AD068(int a, unsigned int b, float c);
extern int func_0ACE30(void);
extern void func_0AAA70(int a, int b, int c, int d, int e);
extern void func_0A7260(unsigned int v);
extern void func_0A7E80(int a, int b, char *s);
extern int func_0ACE80(int v);
extern void func_0AE880(void);

void func_0A7100(void)
{
    char buf[256];

    func_0AD068(D_001EB354, 0xFFFFFFFF, 0.0f);
    if (func_0ACE30() != 0) {
        if (D_001EB358 == 0xE0FFFFFF) {
            func_0AAA70(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
            func_0A7260(D_001EB358);
            sprintf(buf, D_00200280, D_001EB354);
            func_0A7E80(0x20, 0xC8, buf);
            sprintf(buf, D_00200290, func_0ACE80(D_001EB354));
            func_0A7E80(0x20, 0xD8, buf);
            sprintf(buf, D_002002A0, func_0ACE30());
            func_0A7E80(0x20, 0xE8, buf);
        }
    } else {
        func_0AAA70(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
        func_0A7E80(0x20, 0xC8, D_002002B8);
    }
    if (D_001EB164 != 0) {
        func_0AE880();
    }
}
