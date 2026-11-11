/* LEVEL_15.REL:0x1343D0 -- resets the four slots of the global record when the
   selection is the sentinel and the object is alive. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_002F4F50;

void func_1343D0(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_002F4F50.a = 0;
    D_002F4F50.d = 1.0f;
    D_002F4F50.c = 0;
    D_002F4F50.b = 0;
}
