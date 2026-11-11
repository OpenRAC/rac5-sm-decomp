/* LEVEL_23:0x0AE2C8 -- placement copy of LEVEL_01_0B7500.c: steps slot `index`: refreshes it, drains its fade value by 0.2 (floored at 0) and, outside two game-state ranges, calls func_0ADDB0 with 90. */
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

extern Slot D_001CFCB8[];
extern float D_001CFD98[];
extern Game *D_001C73AC;

extern void func_0AE118(Slot *slot);
extern int func_026380(void);
extern void func_0ADDB0(int index, int value);

void func_0AE2C8(int index)
{
    Slot *s;

    s = &D_001CFCB8[index];
    func_0AE118(s);
    s->w0 = s->wC;
    D_001CFD98[index] -= 0.2f;
    if (D_001CFD98[index] < 0.0f) {
        D_001CFD98[index] = 0.0f;
    }
    if ((unsigned int)func_026380() < 2) {
        return;
    }
    switch (D_001C73AC->state) {
    case 15:
    case 21:
    case 22:
    case 23:
        break;
    default:
        func_0ADDB0(index, 0x5A);
        break;
    }
}
