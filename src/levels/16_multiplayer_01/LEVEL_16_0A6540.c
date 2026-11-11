/* LEVEL_16:0x0A6540 -- placement copy of LEVEL_01_0B7500.c: steps slot `index`: refreshes it, drains its fade value by 0.2 (floored at 0) and, outside two game-state ranges, calls func_0A6088 with 90. */
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

extern Slot D_001AA938[];
extern float D_001AAA18[];
extern Game *D_001A1AB4;

extern void func_0A6390(Slot *slot);
extern int func_0260C8(void);
extern void func_0A6088(int index, int value);

void func_0A6540(int index)
{
    Slot *s;

    s = &D_001AA938[index];
    func_0A6390(s);
    s->w0 = s->wC;
    D_001AAA18[index] -= 0.2f;
    if (D_001AAA18[index] < 0.0f) {
        D_001AAA18[index] = 0.0f;
    }
    if ((unsigned int)func_0260C8() < 2) {
        return;
    }
    switch (D_001A1AB4->state) {
    case 15:
    case 21:
    case 22:
    case 23:
        break;
    default:
        func_0A6088(index, 0x5A);
        break;
    }
}
