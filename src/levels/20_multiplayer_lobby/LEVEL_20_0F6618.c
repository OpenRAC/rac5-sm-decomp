/* LEVEL_20:0x0F6618 -- placement copy of LEVEL_16_124518.c: options page input: handles the pending confirm dialog, otherwise closes on back, opens help, moves the cursor over the two columns of four toggles (wrapping inside a column), flips the selected toggle unless it is locked, and passes other input to the page. */
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

extern State D_0011E730;
extern unsigned int D_0011F5E8;
extern char D_0011F540[];
extern unsigned char D_0011F06A;
extern Hud *D_00137A28;

extern unsigned int func_0B0690(void);
extern void func_0B0BB0(int a);
extern long long func_0666A0(void);
extern void func_0B0958(int a);
extern unsigned int func_0B0680(void);
extern char *func_0E2118(int id);
extern void func_0B0B78(int a, int b, int c, int d);
extern unsigned int func_067228(int value);
extern int func_093988(void *p);
extern int func_08F6B0(int index);
extern int func_096438(int a0);
extern int func_0169D0(int a0, int a1);
extern int func_0F3CB8();
extern int func_092C28(struct Obj *o, int arg);

void func_0F6618(void)
{
    unsigned int pressed;

    if (func_0B0690() != 0) {
        func_0B0BB0(5);
        if (func_0666A0() != 0) {
            func_0B0958(0);
            return;
        }
        if (func_0B0680() != 2) {
            return;
        }
        func_08F6B0(0);
        func_08F6B0(7);
        func_096438(0x33);
        return;
    }
    if (func_0666A0() == 0) {
        func_0B0B78(2, (int)func_0E2118(0x326), (int)func_0E2118(0x218), 0);
        return;
    }
    pressed = func_067228(0x6B10);
    func_093988(D_0011F540);
    if (pressed & 0x1000) {
        func_08F6B0(0);
        func_08F6B0(7);
        func_096438(0x33);
        return;
    }
    if (pressed & 0x4000) {
        func_0169D0(D_00137A28->w_180, 1);
        D_0011F06A = 1;
        return;
    }
    if (pressed & 0x20) {
        func_08F6B0(0xB);
        if (D_0011F5E8 == 3) {
            D_0011F5E8 = 0;
        } else if (D_0011F5E8 == 7) {
            D_0011F5E8 = 4;
        } else {
            D_0011F5E8 = D_0011F5E8 + 1;
        }
        return;
    }
    if (pressed & 0x80) {
        func_08F6B0(0xB);
        if (D_0011F5E8 == 0) {
            D_0011F5E8 = 3;
        } else if (D_0011F5E8 == 4) {
            D_0011F5E8 = 7;
        } else {
            D_0011F5E8 = D_0011F5E8 - 1;
        }
        return;
    }
    if (pressed & 0x8000) {
        if ((func_0F3CB8(&D_0011E730) >> D_0011F5E8) & 1) {
            func_08F6B0(0xB);
            return;
        }
        func_08F6B0(1);
        D_0011E730.mask_1C = D_0011E730.mask_1C ^ (1 << D_0011F5E8);
        return;
    }
    if (pressed & 0x10) {
        if (D_0011F5E8 >= 4) {
            func_08F6B0(0xB);
            D_0011F5E8 = D_0011F5E8 - 4;
            return;
        }
    }
    if (pressed & 0x40) {
        if (D_0011F5E8 < 4) {
            func_08F6B0(0xB);
            D_0011F5E8 = D_0011F5E8 + 4;
            return;
        }
    }
    func_092C28((struct Obj *)D_0011F540, pressed);
}
