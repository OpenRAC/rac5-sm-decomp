/* LEVEL_17:0x0A5A68 -- placement copy of LEVEL_01_0B7500.c: steps slot `index`: refreshes it, drains its fade value by 0.2 (floored at 0) and, outside two game-state ranges, calls func_0A5568 with 90. */
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

extern Slot D_0019DF38[];
extern float D_0019E018[];
extern Game *D_001950B4;

extern void func_0A58B8(Slot *slot);
extern int func_025A48(void);
extern void func_0A5568(int index, int value);

void func_0A5A68(int index)
{
    Slot *s;

    s = &D_0019DF38[index];
    func_0A58B8(s);
    s->w0 = s->wC;
    D_0019E018[index] -= 0.2f;
    if (D_0019E018[index] < 0.0f) {
        D_0019E018[index] = 0.0f;
    }
    if ((unsigned int)func_025A48() < 2) {
        return;
    }
    switch (D_001950B4->state) {
    case 15:
    case 21:
    case 22:
    case 23:
        break;
    default:
        func_0A5568(index, 0x5A);
        break;
    }
}
