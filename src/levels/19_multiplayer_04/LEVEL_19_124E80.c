/* LEVEL_19:0x124E80 -- placement copy of LEVEL_16_124518.c: options page input: handles the pending confirm dialog, otherwise closes on back, opens help, moves the cursor over the two columns of four toggles (wrapping inside a column), flips the selected toggle unless it is locked, and passes other input to the page. */
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

extern State D_001BD208;
extern unsigned int D_001BE0C0;
extern char D_001BE018[];
extern unsigned char D_001BDB42;
extern Hud *D_001E0228;

extern unsigned int func_0C5A38(void);
extern void func_0C5F58(int a);
extern long long func_078F18(void);
extern void func_0C5D00(int a);
extern unsigned int func_0C5A28(void);
extern char *func_10F9D0(int id);
extern void func_0C5F20(int a, int b, int c, int d);
extern unsigned int func_079AA0(int value);
extern int func_0A8D30(void *p);
extern int func_0A4928(int index);
extern int func_0AB7E0(int a0);
extern int func_018918(int a0, int a1);
extern int func_122520();
extern int func_0A7FD0(struct Obj *o, int arg);

void func_124E80(void)
{
    unsigned int pressed;

    if (func_0C5A38() != 0) {
        func_0C5F58(5);
        if (func_078F18() != 0) {
            func_0C5D00(0);
            return;
        }
        if (func_0C5A28() != 2) {
            return;
        }
        func_0A4928(0);
        func_0A4928(7);
        func_0AB7E0(0x33);
        return;
    }
    if (func_078F18() == 0) {
        func_0C5F20(2, (int)func_10F9D0(0x326), (int)func_10F9D0(0x218), 0);
        return;
    }
    pressed = func_079AA0(0x6B10);
    func_0A8D30(D_001BE018);
    if (pressed & 0x1000) {
        func_0A4928(0);
        func_0A4928(7);
        func_0AB7E0(0x33);
        return;
    }
    if (pressed & 0x4000) {
        func_018918(D_001E0228->w_180, 1);
        D_001BDB42 = 1;
        return;
    }
    if (pressed & 0x20) {
        func_0A4928(0xB);
        if (D_001BE0C0 == 3) {
            D_001BE0C0 = 0;
        } else if (D_001BE0C0 == 7) {
            D_001BE0C0 = 4;
        } else {
            D_001BE0C0 = D_001BE0C0 + 1;
        }
        return;
    }
    if (pressed & 0x80) {
        func_0A4928(0xB);
        if (D_001BE0C0 == 0) {
            D_001BE0C0 = 3;
        } else if (D_001BE0C0 == 4) {
            D_001BE0C0 = 7;
        } else {
            D_001BE0C0 = D_001BE0C0 - 1;
        }
        return;
    }
    if (pressed & 0x8000) {
        if ((func_122520(&D_001BD208) >> D_001BE0C0) & 1) {
            func_0A4928(0xB);
            return;
        }
        func_0A4928(1);
        D_001BD208.mask_1C = D_001BD208.mask_1C ^ (1 << D_001BE0C0);
        return;
    }
    if (pressed & 0x10) {
        if (D_001BE0C0 >= 4) {
            func_0A4928(0xB);
            D_001BE0C0 = D_001BE0C0 - 4;
            return;
        }
    }
    if (pressed & 0x40) {
        if (D_001BE0C0 < 4) {
            func_0A4928(0xB);
            D_001BE0C0 = D_001BE0C0 + 4;
            return;
        }
    }
    func_0A7FD0((struct Obj *)D_001BE018, pressed);
}
