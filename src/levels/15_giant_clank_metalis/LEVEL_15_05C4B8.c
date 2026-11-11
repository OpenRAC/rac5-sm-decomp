/* LEVEL_15.REL:0x05C4B8 -- resets the four slots of the global record when the
   selection is the sentinel and the object is alive. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_001813B0;

void func_05C4B8(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_001813B0.a = 0;
    D_001813B0.d = 1.0f;
    D_001813B0.c = 0;
    D_001813B0.b = 0;
}
