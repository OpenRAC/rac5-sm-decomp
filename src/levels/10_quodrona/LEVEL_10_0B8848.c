/* LEVEL_10:0x0B8848 -- placement copy of LEVEL_01_0B7500.c: steps slot `index`: refreshes it, drains its fade value by 0.2 (floored at 0) and, outside two game-state ranges, calls func_0B8268 with 90. */
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

extern Slot D_002058B8[];
extern float D_00205998[];
extern Game *D_001FCFAC;

extern void func_0B8698(Slot *slot);
extern int func_027F58(void);
extern void func_0B8268(int index, int value);

void func_0B8848(int index)
{
    Slot *s;

    s = &D_002058B8[index];
    func_0B8698(s);
    s->w0 = s->wC;
    D_00205998[index] -= 0.2f;
    if (D_00205998[index] < 0.0f) {
        D_00205998[index] = 0.0f;
    }
    if ((unsigned int)func_027F58() < 2) {
        return;
    }
    switch (D_001FCFAC->state) {
    case 15:
    case 21:
    case 22:
    case 23:
        break;
    default:
        func_0B8268(index, 0x5A);
        break;
    }
}
