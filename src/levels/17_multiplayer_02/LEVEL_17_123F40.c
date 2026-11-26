/* LEVEL_17:0x123F40 -- placement copy of LEVEL_16_124518.c: options page input: handles the pending confirm dialog, otherwise closes on back, opens help, moves the cursor over the two columns of four toggles (wrapping inside a column), flips the selected toggle unless it is locked, and passes other input to the page. */
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

extern State D_001AF688;
extern unsigned int D_001B0540;
extern char D_001B0498[];
extern unsigned char D_001AFFC2;
extern Hud *D_001D13A8;

extern unsigned int func_0C56A0(void);
extern void func_0C5BC0(int a);
extern long long func_0794A8(void);
extern void func_0C5968(int a);
extern unsigned int func_0C5690(void);
extern char *func_10E8A8(int id);
extern void func_0C5B88(int a, int b, int c, int d);
extern unsigned int func_07A030(int value);
extern int func_0A8998(void *p);
extern int func_0A4590(int index);
extern int func_0AB448(int a0);
extern int func_018598(int a0, int a1);
extern int func_1215E0();
extern int func_0A7C38(struct Obj *o, int arg);

void func_123F40(void)
{
    unsigned int pressed;

    if (func_0C56A0() != 0) {
        func_0C5BC0(5);
        if (func_0794A8() != 0) {
            func_0C5968(0);
            return;
        }
        if (func_0C5690() != 2) {
            return;
        }
        func_0A4590(0);
        func_0A4590(7);
        func_0AB448(0x33);
        return;
    }
    if (func_0794A8() == 0) {
        func_0C5B88(2, (int)func_10E8A8(0x326), (int)func_10E8A8(0x218), 0);
        return;
    }
    pressed = func_07A030(0x6B10);
    func_0A8998(D_001B0498);
    if (pressed & 0x1000) {
        func_0A4590(0);
        func_0A4590(7);
        func_0AB448(0x33);
        return;
    }
    if (pressed & 0x4000) {
        func_018598(D_001D13A8->w_180, 1);
        D_001AFFC2 = 1;
        return;
    }
    if (pressed & 0x20) {
        func_0A4590(0xB);
        if (D_001B0540 == 3) {
            D_001B0540 = 0;
        } else if (D_001B0540 == 7) {
            D_001B0540 = 4;
        } else {
            D_001B0540 = D_001B0540 + 1;
        }
        return;
    }
    if (pressed & 0x80) {
        func_0A4590(0xB);
        if (D_001B0540 == 0) {
            D_001B0540 = 3;
        } else if (D_001B0540 == 4) {
            D_001B0540 = 7;
        } else {
            D_001B0540 = D_001B0540 - 1;
        }
        return;
    }
    if (pressed & 0x8000) {
        if ((func_1215E0(&D_001AF688) >> D_001B0540) & 1) {
            func_0A4590(0xB);
            return;
        }
        func_0A4590(1);
        D_001AF688.mask_1C = D_001AF688.mask_1C ^ (1 << D_001B0540);
        return;
    }
    if (pressed & 0x10) {
        if (D_001B0540 >= 4) {
            func_0A4590(0xB);
            D_001B0540 = D_001B0540 - 4;
            return;
        }
    }
    if (pressed & 0x40) {
        if (D_001B0540 < 4) {
            func_0A4590(0xB);
            D_001B0540 = D_001B0540 + 4;
            return;
        }
    }
    func_0A7C38((struct Obj *)D_001B0498, pressed);
}
