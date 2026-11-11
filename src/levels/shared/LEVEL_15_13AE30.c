/* LEVEL_15.REL:0x13AE30 -- resets the four slots of the global record when the
   selection is the sentinel and the object is alive. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_002F5370;

void func_13AE30(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_002F5370.a = 0;
    D_002F5370.d = 1.0f;
    D_002F5370.c = 0;
    D_002F5370.b = 0;
}
