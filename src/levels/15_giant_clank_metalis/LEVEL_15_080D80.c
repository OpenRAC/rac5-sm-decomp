/* LEVEL_15.REL:0x080D80 -- resets the four slots of the global record when the
   selection is the sentinel and the object is alive. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_001B46B8;

void func_080D80(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_001B46B8.a = 0;
    D_001B46B8.d = 1.0f;
    D_001B46B8.c = 0;
    D_001B46B8.b = 0;
}
