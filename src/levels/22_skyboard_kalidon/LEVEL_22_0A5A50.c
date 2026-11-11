/* LEVEL_22:0x0A5A50 -- placement copy of LEVEL_01_0B7500.c: steps slot `index`: refreshes it, drains its fade value by 0.2 (floored at 0) and, outside two game-state ranges, calls func_0A5538 with 90. */
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

extern Slot D_0015BC38[];
extern float D_0015BD18[];
extern Game *D_0015332C;

extern void func_0A58A0(Slot *slot);
extern int func_022E38(void);
extern void func_0A5538(int index, int value);

void func_0A5A50(int index)
{
    Slot *s;

    s = &D_0015BC38[index];
    func_0A58A0(s);
    s->w0 = s->wC;
    D_0015BD18[index] -= 0.2f;
    if (D_0015BD18[index] < 0.0f) {
        D_0015BD18[index] = 0.0f;
    }
    if ((unsigned int)func_022E38() < 2) {
        return;
    }
    switch (D_0015332C->state) {
    case 15:
    case 21:
    case 22:
    case 23:
        break;
    default:
        func_0A5538(index, 0x5A);
        break;
    }
}
