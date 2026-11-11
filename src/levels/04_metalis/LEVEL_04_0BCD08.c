/* LEVEL_04:0x0BCD08 -- placement copy of LEVEL_01_0B7500.c: steps slot `index`: refreshes it, drains its fade value by 0.2 (floored at 0) and, outside two game-state ranges, calls func_0BC7F0 with 90. */
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

extern Slot D_00215D78[];
extern float D_00215E58[];
extern Game *D_0020D12C;

extern void func_0BCB58(Slot *slot);
extern int func_0282B8(void);
extern void func_0BC7F0(int index, int value);

void func_0BCD08(int index)
{
    Slot *s;

    s = &D_00215D78[index];
    func_0BCB58(s);
    s->w0 = s->wC;
    D_00215E58[index] -= 0.2f;
    if (D_00215E58[index] < 0.0f) {
        D_00215E58[index] = 0.0f;
    }
    if ((unsigned int)func_0282B8() < 2) {
        return;
    }
    switch (D_0020D12C->state) {
    case 15:
    case 21:
    case 22:
    case 23:
        break;
    default:
        func_0BC7F0(index, 0x5A);
        break;
    }
}
