/* LEVEL_19:0x0A5E00 -- placement copy of LEVEL_01_0B7500.c: steps slot `index`: refreshes it, drains its fade value by 0.2 (floored at 0) and, outside two game-state ranges, calls func_0A5900 with 90. */
typedef struct {
    int w0;
    char pad04[0x0C - 0x04];
    int wC;
    char pad10[0x38 - 0x10];
} Slot;

typedef struct {
    char pad00[0x1C6C];
    int state;
} Game;

extern Slot D_001ABAB8[];
extern float D_001ABB98[];
extern Game *D_001A2C34;

extern void func_0A5C50(Slot *slot);
extern int func_025C70(void);
extern void func_0A5900(int index, int value);

void func_0A5E00(int index)
{
    Slot *s;

    s = &D_001ABAB8[index];
    func_0A5C50(s);
    s->w0 = s->wC;
    D_001ABB98[index] -= 0.2f;
    if (D_001ABB98[index] < 0.0f) {
        D_001ABB98[index] = 0.0f;
    }
    if ((unsigned int)func_025C70() < 2) {
        return;
    }
    switch (D_001A2C34->state) {
    case 15:
    case 21:
    case 22:
    case 23:
        break;
    default:
        func_0A5900(index, 0x5A);
        break;
    }
}
