/* LEVEL_15.REL:0x077C50 -- resets the four slots of the global record when the
   selection is the sentinel and the object is alive. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_001B0140;

void func_077C50(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_001B0140.a = 0;
    D_001B0140.d = 1.0f;
    D_001B0140.c = 0;
    D_001B0140.b = 0;
}
