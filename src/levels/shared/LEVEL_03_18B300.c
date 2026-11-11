/* LEVEL_03.REL:0x18B300 -- resets the four slots of the global record when the
   selection is the sentinel and the object is alive. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003B1B38;

void func_18B300(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_003B1B38.a = 0;
    D_003B1B38.d = 1.0f;
    D_003B1B38.c = 0;
    D_003B1B38.b = 0;
}
