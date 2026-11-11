typedef struct { void *p; } Slot;
typedef struct { float f; } FSlot;

extern Slot D_002117A0[];
extern FSlot D_00211958[];

void func_0BD9C8(int index, void *value)
{
    if (D_002117A0[index].p != 0 && D_002117A0[index].p != value) {
        if (D_00211958[index].f == 0.0f) {
            D_00211958[index].f = 1.0f;
        }
    }
    D_002117A0[index].p = value;
}
