/* LEVEL_01:0x0B7500 -- steps slot `index`: refreshes it, drains its fade value by 0.2 (floored at 0) and, outside two game-state ranges, calls func_0B6FE8 with 90. */
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

extern Slot D_001FC8B8[];
extern float D_001FC998[];
extern Game *D_001F3FAC;

extern void func_0B7350(Slot *slot);
extern int func_028650(void);
extern void func_0B6FE8(int index, int value);

void func_0B7500(int index)
{
    Slot *s;

    s = &D_001FC8B8[index];
    func_0B7350(s);
    s->w0 = s->wC;
    D_001FC998[index] -= 0.2f;
    if (D_001FC998[index] < 0.0f) {
        D_001FC998[index] = 0.0f;
    }
    if ((unsigned int)func_028650() < 2) {
        return;
    }
    switch (D_001F3FAC->state) {
    case 15:
    case 21:
    case 22:
    case 23:
        break;
    default:
        func_0B6FE8(index, 0x5A);
        break;
    }
}
