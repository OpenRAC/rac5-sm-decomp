/* LEVEL_16:0x124518 -- options page input: handles the pending confirm dialog, otherwise closes on back, opens help, moves the cursor over the two columns of four toggles (wrapping inside a column), flips the selected toggle unless it is locked, and passes other input to the page. */
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

extern State D_001BC090;
extern unsigned int D_001BCF48;
extern char D_001BCEA0[];
extern unsigned char D_001BC9CA;
extern Hud *D_001E00A8;

extern unsigned int func_0C6160(void);
extern void func_0C6680(int a);
extern long long func_078A30(void);
extern void func_0C6428(int a);
extern unsigned int func_0C6150(void);
extern char *func_10F330(int id);
extern void func_0C6648(int a, int b, int c, int d);
extern unsigned int func_0795B8(int value);
extern int func_0A9458(void *p);
extern int func_0A50B0(int index);
extern int func_0ABF08(int a0);
extern int func_018C18(int a0, int a1);
extern int func_121BB8();
extern int func_0A86F8(struct Obj *o, int arg);

void func_124518(void)
{
    unsigned int pressed;

    if (func_0C6160() != 0) {
        func_0C6680(5);
        if (func_078A30() != 0) {
            func_0C6428(0);
            return;
        }
        if (func_0C6150() != 2) {
            return;
        }
        func_0A50B0(0);
        func_0A50B0(7);
        func_0ABF08(0x33);
        return;
    }
    if (func_078A30() == 0) {
        func_0C6648(2, (int)func_10F330(0x326), (int)func_10F330(0x218), 0);
        return;
    }
    pressed = func_0795B8(0x6B10);
    func_0A9458(D_001BCEA0);
    if (pressed & 0x1000) {
        func_0A50B0(0);
        func_0A50B0(7);
        func_0ABF08(0x33);
        return;
    }
    if (pressed & 0x4000) {
        func_018C18(D_001E00A8->w_180, 1);
        D_001BC9CA = 1;
        return;
    }
    if (pressed & 0x20) {
        func_0A50B0(0xB);
        if (D_001BCF48 == 3) {
            D_001BCF48 = 0;
        } else if (D_001BCF48 == 7) {
            D_001BCF48 = 4;
        } else {
            D_001BCF48 = D_001BCF48 + 1;
        }
        return;
    }
    if (pressed & 0x80) {
        func_0A50B0(0xB);
        if (D_001BCF48 == 0) {
            D_001BCF48 = 3;
        } else if (D_001BCF48 == 4) {
            D_001BCF48 = 7;
        } else {
            D_001BCF48 = D_001BCF48 - 1;
        }
        return;
    }
    if (pressed & 0x8000) {
        if ((func_121BB8(&D_001BC090) >> D_001BCF48) & 1) {
            func_0A50B0(0xB);
            return;
        }
        func_0A50B0(1);
        D_001BC090.mask_1C = D_001BC090.mask_1C ^ (1 << D_001BCF48);
        return;
    }
    if (pressed & 0x10) {
        if (D_001BCF48 >= 4) {
            func_0A50B0(0xB);
            D_001BCF48 = D_001BCF48 - 4;
            return;
        }
    }
    if (pressed & 0x40) {
        if (D_001BCF48 < 4) {
            func_0A50B0(0xB);
            D_001BCF48 = D_001BCF48 + 4;
            return;
        }
    }
    func_0A86F8((struct Obj *)D_001BCEA0, pressed);
}
