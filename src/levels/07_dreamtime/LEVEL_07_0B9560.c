/* LEVEL_07:0x0B9560 -- placement copy of LEVEL_01_0B7500.c: steps slot `index`: refreshes it, drains its fade value by 0.2 (floored at 0) and, outside two game-state ranges, calls func_0B9048 with 90. */
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

extern Slot D_00210BB8[];
extern float D_00210C98[];
extern Game *D_002082AC;

extern void func_0B93B0(Slot *slot);
extern int func_0289B0(void);
extern void func_0B9048(int index, int value);

void func_0B9560(int index)
{
    Slot *s;

    s = &D_00210BB8[index];
    func_0B93B0(s);
    s->w0 = s->wC;
    D_00210C98[index] -= 0.2f;
    if (D_00210C98[index] < 0.0f) {
        D_00210C98[index] = 0.0f;
    }
    if ((unsigned int)func_0289B0() < 2) {
        return;
    }
    switch (D_002082AC->state) {
    case 15:
    case 21:
    case 22:
    case 23:
        break;
    default:
        func_0B9048(index, 0x5A);
        break;
    }
}
