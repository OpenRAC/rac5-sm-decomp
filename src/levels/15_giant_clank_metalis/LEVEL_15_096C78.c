/* LEVEL_15.REL:0x096C78 -- resets the four slots of the global record when the
   selection is the sentinel and the object is alive. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0023FF68;

void func_096C78(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p == 0)
        return;
    D_0023FF68.a = 0;
    D_0023FF68.d = 1.0f;
    D_0023FF68.c = 0;
    D_0023FF68.b = 0;
}
