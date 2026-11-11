/* LEVEL_02:0x0BDE10 -- placement copy of LEVEL_01_0B7500.c: steps slot `index`: refreshes it, drains its fade value by 0.2 (floored at 0) and, outside two game-state ranges, calls func_0BD8F8 with 90. */
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

extern Slot D_00211878[];
extern float D_00211958[];
extern Game *D_00208C2C;

extern void func_0BDC60(Slot *slot);
extern int func_028E38(void);
extern void func_0BD8F8(int index, int value);

void func_0BDE10(int index)
{
    Slot *s;

    s = &D_00211878[index];
    func_0BDC60(s);
    s->w0 = s->wC;
    D_00211958[index] -= 0.2f;
    if (D_00211958[index] < 0.0f) {
        D_00211958[index] = 0.0f;
    }
    if ((unsigned int)func_028E38() < 2) {
        return;
    }
    switch (D_00208C2C->state) {
    case 15:
    case 21:
    case 22:
    case 23:
        break;
    default:
        func_0BD8F8(index, 0x5A);
        break;
    }
}
