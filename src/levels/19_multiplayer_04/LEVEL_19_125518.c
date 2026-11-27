/* LEVEL_19:0x125518 -- placement copy of LEVEL_16_124BB0.c: handles options menu input and updates toggle and slider settings. */
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

extern char D_001BE570[];
extern unsigned int D_001BE578;
extern int D_001BE58C;
extern unsigned short D_001BE618;
extern OptionsCfg *D_001A2C34;
extern char D_001ABC30[];

extern unsigned int func_079AA0(int mask);
extern int func_0799F0(int mask);
extern int func_0AB880(void);
extern int func_0A4928(int sfx);
extern void func_025530(void);
extern int func_0A7FD0(void *menu, unsigned int pad);
extern int func_0A0CB0(char *p);
extern void func_125998(void);
extern void func_0255D8(void);
extern void func_0252B8(void);

void func_125518(void)
{
    unsigned int pressed = func_079AA0(0x6B10);
    unsigned int held = (unsigned int)func_0799F0(0x6B10);

    if ((pressed & 0x1000) != 0) {
        if (func_0AB880() != 0) {
            func_0A4928(0);
            func_0A4928(7);
            return;
        }
    } else if ((pressed & 0xA0) != 0) {
        int changed = 1;
        switch (D_001BE578) {
        case 0:
            D_001A2C34->f28 = -D_001A2C34->f28;
            break;
        case 1:
            D_001A2C34->w24 = 1 - D_001A2C34->w24;
            break;
        case 2:
            D_001A2C34->w40 = 1 - D_001A2C34->w40;
            break;
        default:
            changed = 0;
            break;
        }
        if (changed != 0) {
            func_0A4928(0xB);
        }
    } else if ((held & 0xA0) != 0) {
        int changed = 1;
        D_001BE618++;
        switch (D_001BE578) {
        case 3:
            D_001A2C34->w18 = (held & 0x80) ? --D_001A2C34->w18 : ++D_001A2C34->w18;
            func_025530();
            break;
        case 4:
            D_001A2C34->w1C = (held & 0x80) ? --D_001A2C34->w1C : ++D_001A2C34->w1C;
            func_025530();
            break;
        default:
            changed = 0;
            break;
        }
        if (changed != 0) {
            if ((float)D_001BE618 >= 8.00015926f) {
                func_0A4928(0xB);
                D_001BE618 = 0;
            }
        }
    } else {
        func_0A7FD0(D_001BE570, pressed);
    }

    D_001BE58C = func_0A0CB0(D_001ABC30);
    func_125998();
    func_0255D8();
    func_0252B8();
}
