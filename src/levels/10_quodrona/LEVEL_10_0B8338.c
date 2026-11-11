typedef struct { void *p; } Slot;
typedef struct { float f; } FSlot;

extern Slot D_002057E0[];
extern FSlot D_00205998[];

void func_0B8338(int index, void *value)
{
    if (D_002057E0[index].p != 0 && D_002057E0[index].p != value) {
        if (D_00205998[index].f == 0.0f) {
            D_00205998[index].f = 1.0f;
        }
    }
    D_002057E0[index].p = value;
}
