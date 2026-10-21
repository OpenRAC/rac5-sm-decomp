/* LEVEL_15.REL:0x05C948 -- resets the global timer object when a1 == 0xFFFF. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Timer;

extern Timer D_00181E68;

void func_05C948(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00181E68.a = 0;
        D_00181E68.d = 1.0f;
        D_00181E68.c = 0;
        D_00181E68.b = 0;
    }
}
