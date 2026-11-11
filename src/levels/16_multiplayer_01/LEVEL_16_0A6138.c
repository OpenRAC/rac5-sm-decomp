typedef struct { void *p; } Slot;
typedef struct { float f; } FSlot;

extern Slot D_001AA860[];
extern FSlot D_001AAA18[];

void func_0A6138(int index, void *value)
{
    if (D_001AA860[index].p != 0 && D_001AA860[index].p != value) {
        if (D_001AAA18[index].f == 0.0f) {
            D_001AAA18[index].f = 1.0f;
        }
    }
    D_001AA860[index].p = value;
}
