/* LEVEL_07.REL:0x181330 -- resets the global record D_003AB760 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_003AB760;

void func_181330(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003AB760.i0 = 0;
            D_003AB760.f3 = 1.0f;
            D_003AB760.i2 = 0;
            D_003AB760.i1 = 0;
        }
    }
}
