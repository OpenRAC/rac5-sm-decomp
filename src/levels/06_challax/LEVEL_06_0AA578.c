/* LEVEL_06:0x0AA578 -- placement copy of LEVEL_05_0AE368.c: placement copy of LEVEL_01_0AFDA8.c: per-frame tick of the active screen: runs the subsystem updates and the confirm/cancel handling while the screen flag is set. */
extern unsigned char D_001EAD08;
extern unsigned char D_001EAED0;
extern unsigned char D_001EAEDC;
extern char D_00221EC0[];

extern void func_0AA400(void);
extern void func_0A3460(unsigned int a);
extern void func_0A31F8(void);
extern void func_0B6B60(void);
extern void func_0AAFE8(void);
extern void func_0AA440(char *p);
extern void func_0B16B8(void);
extern int func_019068(int a);
extern void func_0A1D98(char *p);
extern unsigned int func_080E00(int a);
extern unsigned int func_080CF0(int a);
extern void func_0D1FD0(unsigned int a);
extern void func_0D1038(unsigned int a);
extern void func_0D1010(void);
extern int func_0AF858(unsigned int a);
extern void func_0AEB70(void);
extern void func_0ACD90(void);
extern void func_0B0140(void);
extern void func_0AF548(void);
extern void func_0AD0D8(void);
extern void func_0B0378(void);
extern void func_0AF320(void);
extern void func_0AD998(void);
extern void func_0D5850(void);
extern void func_0B6C78(void);
extern int func_0B6C68(void);
extern int func_0B6D00(int a, int b);
extern void func_0BF220(void);
extern int func_0B0848(int a);
extern void func_0B6C10(int a);
extern void func_0C5090(unsigned int a, unsigned int b);
extern void func_0AC9F0(void);
extern void func_0AC448(void);
extern void func_0B0F00(void);
extern void func_0ABCC0(void);

int func_0AA578(void)
{
    char *s;
    char *t;
    unsigned int pad;
    unsigned char idle;
    func_0AA400();
    if (D_001EAD08) {
        func_0A3460(0xFFFFFFFF);
        if (D_001EAED0) {
            func_0A31F8();
        }
        func_0B6B60();
        if (D_001EAEDC) {
            D_001EAEDC = 0;
            func_0AAFE8();
            t = D_00221EC0;
            func_0AA440(t + 0x30);
        }
        func_0B16B8();
        if (func_019068(4)) {
            s = D_00221EC0;
            if (s != 0) {
                func_0A1D98(s + 0x30);
            }
        }
        pad = func_080E00(0x7F12);
        func_0D1FD0(pad);
        if (!func_019068(6)) {
            func_0D1038(pad);
            func_0D1010();
        }
        func_0AF858(pad);
        func_0AEB70();
        func_0ACD90();
        func_0B0140();
        func_0AF548();
        func_0AD0D8();
        func_0B0378();
        func_0AF320();
        func_0AD998();
        func_0B0378();
        func_0D5850();
        func_0B6C78();
        idle = func_019068(6) ^ 1;
        if ((pad & 0x80001) && idle) {
            if (!func_0B6C68()) {
                func_0B6D00(2, 0);
            }
        } else if ((pad & 8) && idle) {
            func_0BF220();
            func_0B0848(6);
            func_0B6C10(0);
        } else {
            pad = func_080CF0(0xB82);
            func_0C5090(pad, func_080E00(0x82));
        }
        func_0AC9F0();
        func_0AC448();
        func_0B0F00();
        func_0ABCC0();
        return 1;
    }
    return 0;
}
