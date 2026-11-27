/* LEVEL_16:0x124BB0 -- handles options menu input and updates toggle and slider settings. */
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

extern char D_001BD3F8[];
extern unsigned int D_001BD400;
extern int D_001BD414;
extern unsigned short D_001BD4A0;
extern OptionsCfg *D_001A1AB4;
extern char D_001AAAB0[];

extern unsigned int func_0795B8(int mask);
extern int func_079508(int mask);
extern int func_0ABFA8(void);
extern int func_0A50B0(int sfx);
extern void func_025988(void);
extern int func_0A86F8(void *menu, unsigned int pad);
extern int func_0A1420(char *p);
extern void func_125030(void);
extern void func_025A30(void);
extern void func_025710(void);

void func_124BB0(void)
{
    unsigned int pressed = func_0795B8(0x6B10);
    unsigned int held = (unsigned int)func_079508(0x6B10);

    if ((pressed & 0x1000) != 0) {
        if (func_0ABFA8() != 0) {
            func_0A50B0(0);
            func_0A50B0(7);
            return;
        }
    } else if ((pressed & 0xA0) != 0) {
        int changed = 1;
        switch (D_001BD400) {
        case 0:
            D_001A1AB4->f28 = -D_001A1AB4->f28;
            break;
        case 1:
            D_001A1AB4->w24 = 1 - D_001A1AB4->w24;
            break;
        case 2:
            D_001A1AB4->w40 = 1 - D_001A1AB4->w40;
            break;
        default:
            changed = 0;
            break;
        }
        if (changed != 0) {
            func_0A50B0(0xB);
        }
    } else if ((held & 0xA0) != 0) {
        int changed = 1;
        D_001BD4A0++;
        switch (D_001BD400) {
        case 3:
            D_001A1AB4->w18 = (held & 0x80) ? --D_001A1AB4->w18 : ++D_001A1AB4->w18;
            func_025988();
            break;
        case 4:
            D_001A1AB4->w1C = (held & 0x80) ? --D_001A1AB4->w1C : ++D_001A1AB4->w1C;
            func_025988();
            break;
        default:
            changed = 0;
            break;
        }
        if (changed != 0) {
            if ((float)D_001BD4A0 >= 8.00015926f) {
                func_0A50B0(0xB);
                D_001BD4A0 = 0;
            }
        }
    } else {
        func_0A86F8(D_001BD3F8, pressed);
    }

    D_001BD414 = func_0A1420(D_001AAAB0);
    func_125030();
    func_025A30();
    func_025710();
}
