/* LEVEL_20:0x090AC0 -- placement copy of LEVEL_01_0B7500.c: steps slot `index`: refreshes it, drains its fade value by 0.2 (floored at 0) and, outside two game-state ranges, calls func_090608 with 90. */
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

extern Slot D_0010D018[];
extern float D_0010D0F8[];
extern Game *D_00104194;

extern void func_090910(Slot *slot);
extern int func_022BE8(void);
extern void func_090608(int index, int value);

void func_090AC0(int index)
{
    Slot *s;

    s = &D_0010D018[index];
    func_090910(s);
    s->w0 = s->wC;
    D_0010D0F8[index] -= 0.2f;
    if (D_0010D0F8[index] < 0.0f) {
        D_0010D0F8[index] = 0.0f;
    }
    if ((unsigned int)func_022BE8() < 2) {
        return;
    }
    switch (D_00104194->state) {
    case 15:
    case 21:
    case 22:
    case 23:
        break;
    default:
        func_090608(index, 0x5A);
        break;
    }
}
