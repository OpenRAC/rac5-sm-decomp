typedef struct { void *p; } Slot;
typedef struct { float f; } FSlot;

extern Slot D_00214E60[];
extern FSlot D_00215018[];

void func_0B6EA0(int index, void *value)
{
    if (D_00214E60[index].p != 0 && D_00214E60[index].p != value) {
        if (D_00215018[index].f == 0.0f) {
            D_00215018[index].f = 1.0f;
        }
    }
    D_00214E60[index].p = value;
}
