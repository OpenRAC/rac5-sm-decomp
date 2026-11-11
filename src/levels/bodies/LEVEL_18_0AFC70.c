/* LEVEL_18:0x0AFC70 -- placement copy of LEVEL_01_0C17E0.c: handles one frame of menu input: confirm, cancel, toggle and cursor movement. */
extern int D_001AE354;
extern int D_001AE350;
extern int D_001AE36C;
extern int D_001AE368;
extern int D_001AE358;
extern int D_001AE35C;
extern int D_001ABF08;
extern unsigned char D_001AE364;
extern int D_001AE3C0[][4];
extern char D_001AE370[];
extern char D_001AE398[];
extern unsigned int func_078F38(int a);
extern int func_0A40A8(int a);
extern void func_0181E0(int a, int b);
extern int func_0AAEE0(int a);
extern void func_0B9A18(int a);
extern int func_021ED8(int s, int a);
extern int func_021F00(int s, int a);
extern int func_0216B8(int s, int a);
extern void func_0AFBB0(void);
extern void func_0A0398(char *p);
extern void func_0B0568(int a);

void func_0AFC70(void)
{
    unsigned int pad;
    int sel;
    pad = func_078F38(0x6B10);
    sel = D_001AE3C0[D_001AE354][D_001AE350];
    if (pad & 0x8) {
        func_0A40A8(0);
        func_0A40A8(7);
        func_0181E0(4, 0);
    } else if (pad & 0x1000) {
        func_0A40A8(0);
        func_0A40A8(6);
        func_0AAEE0(3);
    } else if (pad & 0x2000) {
        func_0B9A18(5);
        func_0AAEE0(10);
    } else if (pad & 0x8000) {
        if (sel && func_021ED8(sel, -1) && !func_021F00(sel, -1)) {
            D_001AE364 ^= 1;
            func_0A40A8(1);
        }
    } else if (pad & 0x4000) {
        if (sel && func_021ED8(sel, -1) && !func_021F00(sel, -1)) {
            if (func_0216B8(sel, -1)) {
                func_0A40A8(0xC);
            } else {
                D_001ABF08 = sel;
                D_001AE358 = D_001AE350;
                D_001AE35C = D_001AE354;
                func_0A40A8(1);
            }
        }
    } else if (!D_001AE364) {
        if (pad & 0x10) {
            func_0A40A8(8);
            D_001AE354--;
            if (D_001AE354 < 0) D_001AE354 = D_001AE36C;
            func_0AFBB0();
        } else if (pad & 0x40) {
            func_0A40A8(8);
            D_001AE354++;
            if (D_001AE36C < D_001AE354) D_001AE354 = 0;
            func_0AFBB0();
        } else if (pad & 0x80) {
            func_0A40A8(8);
            D_001AE350--;
            if (D_001AE350 < 0) D_001AE350 = D_001AE368;
            func_0AFBB0();
        } else if (pad & 0x20) {
            func_0A40A8(8);
            D_001AE350++;
            if (D_001AE368 < D_001AE350) D_001AE350 = 0;
            func_0AFBB0();
        }
    }
    func_0A0398(D_001AE370);
    func_0A0398(D_001AE398);
    func_0B0568(0);
}
