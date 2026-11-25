/* LEVEL_07:0x0B1DA8 -- placement copy of LEVEL_05_0AE368.c: placement copy of LEVEL_01_0AFDA8.c: per-frame tick of the active screen: runs the subsystem updates and the confirm/cancel handling while the screen flag is set. */
extern unsigned char D_00210108;
extern unsigned char D_002102D0;
extern unsigned char D_002102DC;
extern char D_0024AA40[];

extern void func_0B1C30(void);
extern void func_0AAC90(unsigned int a);
extern void func_0AAA28(void);
extern void func_0BE2C0(void);
extern void func_0B2818(void);
extern void func_0B1C70(char *p);
extern void func_0B8E48(void);
extern int func_01AF28(int a);
extern void func_0A95C8(char *p);
extern unsigned int func_08A058(int a);
extern unsigned int func_089F48(int a);
extern void func_0D9730(unsigned int a);
extern void func_0D8798(unsigned int a);
extern void func_0D8770(void);
extern void func_0B7078(unsigned int a);
extern void func_0B6390(void);
extern void func_0B45B0(void);
extern void func_0B7978(void);
extern void func_0B6D68(void);
extern void func_0B48F8(void);
extern void func_0B7BB0(void);
extern void func_0B6B40(void);
extern void func_0B51B8(void);
extern void func_0DCFB0(void);
extern void func_0BE3D8(void);
extern int func_0BE3C8(void);
extern int func_0BE460(int a, int b);
extern void func_0C6980(void);
extern int func_0B8080(int a);
extern void func_0BE370(int a);
extern void func_0CC7F0(unsigned int a, unsigned int b);
extern void func_0B4220(void);
extern void func_0B3C78(void);
extern void func_0B8738(void);
extern void func_0B34F0(void);

int func_0B1DA8(void)
{
    char *s;
    char *t;
    unsigned int pad;
    unsigned char idle;
    func_0B1C30();
    if (D_00210108) {
        func_0AAC90(0xFFFFFFFF);
        if (D_002102D0) {
            func_0AAA28();
        }
        func_0BE2C0();
        if (D_002102DC) {
            D_002102DC = 0;
            func_0B2818();
            t = D_0024AA40;
            func_0B1C70(t + 0x30);
        }
        func_0B8E48();
        if (func_01AF28(4)) {
            s = D_0024AA40;
            if (s != 0) {
                func_0A95C8(s + 0x30);
            }
        }
        pad = func_08A058(0x7F12);
        func_0D9730(pad);
        if (!func_01AF28(6)) {
            func_0D8798(pad);
            func_0D8770();
        }
        ((int (*)(unsigned int a))func_0B7078)(pad);
        func_0B6390();
        func_0B45B0();
        func_0B7978();
        func_0B6D68();
        func_0B48F8();
        func_0B7BB0();
        func_0B6B40();
        func_0B51B8();
        func_0B7BB0();
        func_0DCFB0();
        func_0BE3D8();
        idle = func_01AF28(6) ^ 1;
        if ((pad & 0x80001) && idle) {
            if (!func_0BE3C8()) {
                func_0BE460(2, 0);
            }
        } else if ((pad & 8) && idle) {
            func_0C6980();
            func_0B8080(6);
            func_0BE370(0);
        } else {
            pad = func_089F48(0xB82);
            func_0CC7F0(pad, func_08A058(0x82));
        }
        func_0B4220();
        func_0B3C78();
        func_0B8738();
        func_0B34F0();
        return 1;
    }
    return 0;
}
