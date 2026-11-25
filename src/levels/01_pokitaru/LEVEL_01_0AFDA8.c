/* LEVEL_01:0x0AFDA8 -- placement copy of LEVEL_05_0AE368.c: placement copy of LEVEL_01_0AFDA8.c: per-frame tick of the active screen: runs the subsystem updates and the confirm/cancel handling while the screen flag is set. */
extern unsigned char D_001FBE08;
extern unsigned char D_001FBFD0;
extern unsigned char D_001FBFDC;
extern char D_00235140[];

extern void func_0AFC30(void);
extern void func_0A8C90(unsigned int a);
extern void func_0A8A28(void);
extern void func_0BC260(void);
extern void func_0B0818(void);
extern void func_0AFC70(char *p);
extern void func_0B6DE8(void);
extern int func_01A868(int a);
extern void func_0A75C8(char *p);
extern unsigned int func_087F88(int a);
extern unsigned int func_087E78(int a);
extern void func_0D76D0(unsigned int a);
extern void func_0D6738(unsigned int a);
extern void func_0D6710(void);
extern void func_0B5018(unsigned int a);
extern void func_0B4330(void);
extern void func_0B2550(void);
extern void func_0B5918(void);
extern void func_0B4D08(void);
extern void func_0B2898(void);
extern void func_0B5B50(void);
extern void func_0B4AE0(void);
extern void func_0B3158(void);
extern void func_0DAF50(void);
extern void func_0BC378(void);
extern int func_0BC368(void);
extern int func_0BC400(int a, int b);
extern void func_0C4920(void);
extern int func_0B6020(int a);
extern void func_0BC310(int a);
extern void func_0CA790(unsigned int a, unsigned int b);
extern void func_0B2220(void);
extern void func_0B1C78(void);
extern void func_0B66D8(void);
extern void func_0B14F0(void);

int func_0AFDA8(void)
{
    char *s;
    char *t;
    unsigned int pad;
    unsigned char idle;
    func_0AFC30();
    if (D_001FBE08) {
        func_0A8C90(0xFFFFFFFF);
        if (D_001FBFD0) {
            func_0A8A28();
        }
        func_0BC260();
        if (D_001FBFDC) {
            D_001FBFDC = 0;
            func_0B0818();
            t = D_00235140;
            func_0AFC70(t + 0x30);
        }
        func_0B6DE8();
        if (func_01A868(4)) {
            s = D_00235140;
            if (s != 0) {
                func_0A75C8(s + 0x30);
            }
        }
        pad = func_087F88(0x7F12);
        func_0D76D0(pad);
        if (!func_01A868(6)) {
            func_0D6738(pad);
            func_0D6710();
        }
        ((int (*)(unsigned int a))func_0B5018)(pad);
        func_0B4330();
        func_0B2550();
        func_0B5918();
        func_0B4D08();
        func_0B2898();
        func_0B5B50();
        func_0B4AE0();
        func_0B3158();
        func_0B5B50();
        func_0DAF50();
        func_0BC378();
        idle = func_01A868(6) ^ 1;
        if ((pad & 0x80001) && idle) {
            if (!func_0BC368()) {
                func_0BC400(2, 0);
            }
        } else if ((pad & 8) && idle) {
            func_0C4920();
            func_0B6020(6);
            func_0BC310(0);
        } else {
            pad = func_087E78(0xB82);
            func_0CA790(pad, func_087F88(0x82));
        }
        func_0B2220();
        func_0B1C78();
        func_0B66D8();
        func_0B14F0();
        return 1;
    }
    return 0;
}
