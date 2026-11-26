/* LEVEL_23:0x0A6B18 -- placement copy of LEVEL_05_0AE368.c: placement copy of LEVEL_01_0AFDA8.c: per-frame tick of the active screen: runs the subsystem updates and the confirm/cancel handling while the screen flag is set. */
extern unsigned char D_001CF208;
extern unsigned char D_001CF3D0;
extern unsigned char D_001CF3DC;
extern char D_002025C0[];

extern void func_0A69A0(void);
extern void func_09FA00(unsigned int a);
extern void func_09F798(void);
extern void func_0B2FF8(void);
extern void func_0A7588(void);
extern void func_0A69E0(char *p);
extern void func_0ADBB0(void);
extern int func_019378(int a);
extern void func_09E338(char *p);
extern unsigned int func_07DE48(int a);
extern unsigned int func_07DD38(int a);
extern void func_0CE500(unsigned int a);
extern void func_0CD568(unsigned int a);
extern void func_0CD540(void);
extern int func_0ABDF8(unsigned int a);
extern void func_0AB110(void);
extern void func_0A9330(void);
extern void func_0AC6E0(void);
extern void func_0ABAE8(void);
extern void func_0A9678(void);
extern void func_0AC918(void);
extern void func_0AB8C0(void);
extern void func_0A9F38(void);
extern void func_0D1D80(void);
extern void func_0B3110(void);
extern int func_0B3100(void);
extern int func_0B3198(int a, int b);
extern void func_0BB6C0(void);
extern int func_0ACDE8(int a);
extern void func_0B30A8(int a);
extern void func_0C15C8(unsigned int a, unsigned int b);
extern void func_0A9000(void);
extern void func_0A8A58(void);
extern void func_0AD4A0(void);
extern void func_0A8260(void);

int func_0A6B18(void)
{
    char *s;
    char *t;
    unsigned int pad;
    unsigned char idle;
    func_0A69A0();
    if (D_001CF208) {
        func_09FA00(0xFFFFFFFF);
        if (D_001CF3D0) {
            func_09F798();
        }
        func_0B2FF8();
        if (D_001CF3DC) {
            D_001CF3DC = 0;
            func_0A7588();
            t = D_002025C0;
            func_0A69E0(t + 0x30);
        }
        func_0ADBB0();
        if (func_019378(4)) {
            s = D_002025C0;
            if (s != 0) {
                func_09E338(s + 0x30);
            }
        }
        pad = func_07DE48(0x7F12);
        func_0CE500(pad);
        if (!func_019378(6)) {
            func_0CD568(pad);
            func_0CD540();
        }
        func_0ABDF8(pad);
        func_0AB110();
        func_0A9330();
        func_0AC6E0();
        func_0ABAE8();
        func_0A9678();
        func_0AC918();
        func_0AB8C0();
        func_0A9F38();
        func_0AC918();
        func_0D1D80();
        func_0B3110();
        idle = func_019378(6) ^ 1;
        if ((pad & 0x80001) && idle) {
            if (!func_0B3100()) {
                func_0B3198(2, 0);
            }
        } else if ((pad & 8) && idle) {
            func_0BB6C0();
            func_0ACDE8(6);
            func_0B30A8(0);
        } else {
            pad = func_07DD38(0xB82);
            func_0C15C8(pad, func_07DE48(0x82));
        }
        func_0A9000();
        func_0A8A58();
        func_0AD4A0();
        func_0A8260();
        return 1;
    }
    return 0;
}
