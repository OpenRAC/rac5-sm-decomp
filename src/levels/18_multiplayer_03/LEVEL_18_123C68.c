/* LEVEL_18:0x123C68 -- placement copy of LEVEL_16_124BB0.c: handles options menu input and updates toggle and slider settings. */
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

extern char D_001BE878[];
extern unsigned int D_001BE880;
extern int D_001BE894;
extern unsigned short D_001BE920;
extern OptionsCfg *D_001A2F34;
extern char D_001ABF30[];

extern unsigned int func_078F38(int mask);
extern int func_078E88(int mask);
extern int func_0AAF80(void);
extern int func_0A40A8(int sfx);
extern void func_024F38(void);
extern int func_0A76D0(void *menu, unsigned int pad);
extern int func_0A0430(char *p);
extern void func_1240E8(void);
extern void func_024FE0(void);
extern void func_024CC0(void);

void func_123C68(void)
{
    unsigned int pressed = func_078F38(0x6B10);
    unsigned int held = (unsigned int)func_078E88(0x6B10);

    if ((pressed & 0x1000) != 0) {
        if (func_0AAF80() != 0) {
            func_0A40A8(0);
            func_0A40A8(7);
            return;
        }
    } else if ((pressed & 0xA0) != 0) {
        int changed = 1;
        switch (D_001BE880) {
        case 0:
            D_001A2F34->f28 = -D_001A2F34->f28;
            break;
        case 1:
            D_001A2F34->w24 = 1 - D_001A2F34->w24;
            break;
        case 2:
            D_001A2F34->w40 = 1 - D_001A2F34->w40;
            break;
        default:
            changed = 0;
            break;
        }
        if (changed != 0) {
            func_0A40A8(0xB);
        }
    } else if ((held & 0xA0) != 0) {
        int changed = 1;
        D_001BE920++;
        switch (D_001BE880) {
        case 3:
            D_001A2F34->w18 = (held & 0x80) ? --D_001A2F34->w18 : ++D_001A2F34->w18;
            func_024F38();
            break;
        case 4:
            D_001A2F34->w1C = (held & 0x80) ? --D_001A2F34->w1C : ++D_001A2F34->w1C;
            func_024F38();
            break;
        default:
            changed = 0;
            break;
        }
        if (changed != 0) {
            if ((float)D_001BE920 >= 8.00015926f) {
                func_0A40A8(0xB);
                D_001BE920 = 0;
            }
        }
    } else {
        func_0A76D0(D_001BE878, pressed);
    }

    D_001BE894 = func_0A0430(D_001ABF30);
    func_1240E8();
    func_024FE0();
    func_024CC0();
}
