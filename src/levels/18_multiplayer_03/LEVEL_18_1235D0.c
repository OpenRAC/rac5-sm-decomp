/* LEVEL_18:0x1235D0 -- placement copy of LEVEL_16_124518.c: options page input: handles the pending confirm dialog, otherwise closes on back, opens help, moves the cursor over the two columns of four toggles (wrapping inside a column), flips the selected toggle unless it is locked, and passes other input to the page. */
typedef struct {
    int before_00;
    int disabled_04;
    int mode_08;
    char pad_0C[0x10];
    unsigned int mask_1C;
} State;

typedef struct {
    char pad_000[0x180];
    int w_180;
} Hud;

struct Obj;

extern State D_001BD510;
extern unsigned int D_001BE3C8;
extern char D_001BE320[];
extern unsigned char D_001BDE4A;
extern Hud *D_001E0428;

extern unsigned int func_0C5138(void);
extern void func_0C5658(int a);
extern long long func_0783B0(void);
extern void func_0C5400(int a);
extern unsigned int func_0C5128(void);
extern char *func_10DFE0(int id);
extern void func_0C5620(int a, int b, int c, int d);
extern unsigned int func_078F38(int value);
extern int func_0A8430(void *p);
extern int func_0A40A8(int index);
extern int func_0AAEE0(int a0);
extern int func_018260(int a0, int a1);
extern int func_120C70();
extern int func_0A76D0(struct Obj *o, int arg);

void func_1235D0(void)
{
    unsigned int pressed;

    if (func_0C5138() != 0) {
        func_0C5658(5);
        if (func_0783B0() != 0) {
            func_0C5400(0);
            return;
        }
        if (func_0C5128() != 2) {
            return;
        }
        func_0A40A8(0);
        func_0A40A8(7);
        func_0AAEE0(0x33);
        return;
    }
    if (func_0783B0() == 0) {
        func_0C5620(2, (int)func_10DFE0(0x326), (int)func_10DFE0(0x218), 0);
        return;
    }
    pressed = func_078F38(0x6B10);
    func_0A8430(D_001BE320);
    if (pressed & 0x1000) {
        func_0A40A8(0);
        func_0A40A8(7);
        func_0AAEE0(0x33);
        return;
    }
    if (pressed & 0x4000) {
        func_018260(D_001E0428->w_180, 1);
        D_001BDE4A = 1;
        return;
    }
    if (pressed & 0x20) {
        func_0A40A8(0xB);
        if (D_001BE3C8 == 3) {
            D_001BE3C8 = 0;
        } else if (D_001BE3C8 == 7) {
            D_001BE3C8 = 4;
        } else {
            D_001BE3C8 = D_001BE3C8 + 1;
        }
        return;
    }
    if (pressed & 0x80) {
        func_0A40A8(0xB);
        if (D_001BE3C8 == 0) {
            D_001BE3C8 = 3;
        } else if (D_001BE3C8 == 4) {
            D_001BE3C8 = 7;
        } else {
            D_001BE3C8 = D_001BE3C8 - 1;
        }
        return;
    }
    if (pressed & 0x8000) {
        if ((func_120C70(&D_001BD510) >> D_001BE3C8) & 1) {
            func_0A40A8(0xB);
            return;
        }
        func_0A40A8(1);
        D_001BD510.mask_1C = D_001BD510.mask_1C ^ (1 << D_001BE3C8);
        return;
    }
    if (pressed & 0x10) {
        if (D_001BE3C8 >= 4) {
            func_0A40A8(0xB);
            D_001BE3C8 = D_001BE3C8 - 4;
            return;
        }
    }
    if (pressed & 0x40) {
        if (D_001BE3C8 < 4) {
            func_0A40A8(0xB);
            D_001BE3C8 = D_001BE3C8 + 4;
            return;
        }
    }
    func_0A76D0((struct Obj *)D_001BE320, pressed);
}
