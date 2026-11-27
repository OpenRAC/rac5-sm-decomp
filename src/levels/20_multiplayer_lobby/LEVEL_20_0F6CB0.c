/* LEVEL_20:0x0F6CB0 -- placement copy of LEVEL_16_124BB0.c: handles options menu input and updates toggle and slider settings. */
typedef struct {
    char pad0[0x18];
    int w18;
    int w1C;
    int pad20;
    int w24;
    float f28;
    char pad2C[0x40 - 0x2C];
    int w40;
} OptionsCfg;

extern char D_0011FA98[];
extern unsigned int D_0011FAA0;
extern int D_0011FAB4;
extern unsigned short D_0011FB40;
extern OptionsCfg *D_00104194;
extern char D_0010D190[];

extern unsigned int func_067228(int mask);
extern int func_067178(int mask);
extern int func_0964D8(void);
extern int func_08F6B0(int sfx);
extern void func_0224A8(void);
extern int func_092C28(void *menu, unsigned int pad);
extern int func_08BB18(char *p);
extern void func_0F7130(void);
extern void func_022550(void);
extern void func_022288(void);

void func_0F6CB0(void)
{
    unsigned int pressed = func_067228(0x6B10);
    unsigned int held = (unsigned int)func_067178(0x6B10);

    if ((pressed & 0x1000) != 0) {
        if (func_0964D8() != 0) {
            func_08F6B0(0);
            func_08F6B0(7);
            return;
        }
    } else if ((pressed & 0xA0) != 0) {
        int changed = 1;
        switch (D_0011FAA0) {
        case 0:
            D_00104194->f28 = -D_00104194->f28;
            break;
        case 1:
            D_00104194->w24 = 1 - D_00104194->w24;
            break;
        case 2:
            D_00104194->w40 = 1 - D_00104194->w40;
            break;
        default:
            changed = 0;
            break;
        }
        if (changed != 0) {
            func_08F6B0(0xB);
        }
    } else if ((held & 0xA0) != 0) {
        int changed = 1;
        D_0011FB40++;
        switch (D_0011FAA0) {
        case 3:
            D_00104194->w18 = (held & 0x80) ? --D_00104194->w18 : ++D_00104194->w18;
            func_0224A8();
            break;
        case 4:
            D_00104194->w1C = (held & 0x80) ? --D_00104194->w1C : ++D_00104194->w1C;
            func_0224A8();
            break;
        default:
            changed = 0;
            break;
        }
        if (changed != 0) {
            if ((float)D_0011FB40 >= 8.00015926f) {
                func_08F6B0(0xB);
                D_0011FB40 = 0;
            }
        }
    } else {
        func_092C28(D_0011FA98, pressed);
    }

    D_0011FAB4 = func_08BB18(D_0010D190);
    func_0F7130();
    func_022550();
    func_022288();
}
