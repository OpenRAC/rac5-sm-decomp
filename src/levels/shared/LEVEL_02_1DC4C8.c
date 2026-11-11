/* LEVEL_02.REL:0x1DC4C8 -- resets the four slots of the global record when the
   selection is the sentinel and the object is alive. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003B0708;

void func_1DC4C8(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_003B0708.a = 0;
    D_003B0708.d = 1.0f;
    D_003B0708.c = 0;
    D_003B0708.b = 0;
}
