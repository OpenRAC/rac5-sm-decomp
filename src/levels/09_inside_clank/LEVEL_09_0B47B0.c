/* LEVEL_09:0x0B47B0 -- placement copy of LEVEL_01_0B7500.c: steps slot `index`: refreshes it, drains its fade value by 0.2 (floored at 0) and, outside two game-state ranges, calls func_0B4298 with 90. */
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

extern Slot D_001E66B8[];
extern float D_001E6798[];
extern Game *D_001DDDAC;

extern void func_0B4600(Slot *slot);
extern int func_027658(void);
extern void func_0B4298(int index, int value);

void func_0B47B0(int index)
{
    Slot *s;

    s = &D_001E66B8[index];
    func_0B4600(s);
    s->w0 = s->wC;
    D_001E6798[index] -= 0.2f;
    if (D_001E6798[index] < 0.0f) {
        D_001E6798[index] = 0.0f;
    }
    if ((unsigned int)func_027658() < 2) {
        return;
    }
    switch (D_001DDDAC->state) {
    case 15:
    case 21:
    case 22:
    case 23:
        break;
    default:
        func_0B4298(index, 0x5A);
        break;
    }
}
