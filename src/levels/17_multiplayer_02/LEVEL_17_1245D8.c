/* LEVEL_17:0x1245D8 -- placement copy of LEVEL_16_124BB0.c: handles options menu input and updates toggle and slider settings. */
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

extern char D_001B09F0[];
extern unsigned int D_001B09F8;
extern int D_001B0A0C;
extern unsigned short D_001B0A98;
extern OptionsCfg *D_001950B4;
extern char D_0019E0B0[];

extern unsigned int func_07A030(int mask);
extern int func_079F80(int mask);
extern int func_0AB4E8(void);
extern int func_0A4590(int sfx);
extern void func_025308(void);
extern int func_0A7C38(void *menu, unsigned int pad);
extern int func_0A0918(char *p);
extern void func_124A58(void);
extern void func_0253B0(void);
extern void func_025090(void);

void func_1245D8(void)
{
    unsigned int pressed = func_07A030(0x6B10);
    unsigned int held = (unsigned int)func_079F80(0x6B10);

    if ((pressed & 0x1000) != 0) {
        if (func_0AB4E8() != 0) {
            func_0A4590(0);
            func_0A4590(7);
            return;
        }
    } else if ((pressed & 0xA0) != 0) {
        int changed = 1;
        switch (D_001B09F8) {
        case 0:
            D_001950B4->f28 = -D_001950B4->f28;
            break;
        case 1:
            D_001950B4->w24 = 1 - D_001950B4->w24;
            break;
        case 2:
            D_001950B4->w40 = 1 - D_001950B4->w40;
            break;
        default:
            changed = 0;
            break;
        }
        if (changed != 0) {
            func_0A4590(0xB);
        }
    } else if ((held & 0xA0) != 0) {
        int changed = 1;
        D_001B0A98++;
        switch (D_001B09F8) {
        case 3:
            D_001950B4->w18 = (held & 0x80) ? --D_001950B4->w18 : ++D_001950B4->w18;
            func_025308();
            break;
        case 4:
            D_001950B4->w1C = (held & 0x80) ? --D_001950B4->w1C : ++D_001950B4->w1C;
            func_025308();
            break;
        default:
            changed = 0;
            break;
        }
        if (changed != 0) {
            if ((float)D_001B0A98 >= 8.00015926f) {
                func_0A4590(0xB);
                D_001B0A98 = 0;
            }
        }
    } else {
        func_0A7C38(D_001B09F0, pressed);
    }

    D_001B0A0C = func_0A0918(D_0019E0B0);
    func_124A58();
    func_0253B0();
    func_025090();
}
