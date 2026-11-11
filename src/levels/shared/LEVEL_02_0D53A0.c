/* LEVEL_02:0x0D53A0 -- resets one record of the level's object table:
   a flag byte cleared, a scale set to 1.0, two counters cleared. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_343CC0;

void func_0D53A0(void *p, unsigned int flag)
{
    if (flag == 0xFFFF && p != 0) {
        D_343CC0.a = 0;
        D_343CC0.d = 1.0f;
        D_343CC0.c = 0;
        D_343CC0.b = 0;
    }
}
