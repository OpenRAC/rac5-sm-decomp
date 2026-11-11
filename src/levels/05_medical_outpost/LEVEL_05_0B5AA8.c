/* LEVEL_05:0x0B5AA8 -- placement copy of LEVEL_01_0B7500.c: steps slot `index`: refreshes it, drains its fade value by 0.2 (floored at 0) and, outside two game-state ranges, calls func_0B5590 with 90. */
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

extern Slot D_001EBC38[];
extern float D_001EBD18[];
extern Game *D_001E332C;

extern void func_0B58F8(Slot *slot);
extern int func_027468(void);
extern void func_0B5590(int index, int value);

void func_0B5AA8(int index)
{
    Slot *s;

    s = &D_001EBC38[index];
    func_0B58F8(s);
    s->w0 = s->wC;
    D_001EBD18[index] -= 0.2f;
    if (D_001EBD18[index] < 0.0f) {
        D_001EBD18[index] = 0.0f;
    }
    if ((unsigned int)func_027468() < 2) {
        return;
    }
    switch (D_001E332C->state) {
    case 15:
    case 21:
    case 22:
    case 23:
        break;
    default:
        func_0B5590(index, 0x5A);
        break;
    }
}
