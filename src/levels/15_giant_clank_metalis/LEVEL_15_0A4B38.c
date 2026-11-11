/* LEVEL_15:0x0A4B38 -- resets one record of the level's object table:
   a flag byte cleared, a scale set to 1.0, two counters cleared. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_240AF0;

void func_0A4B38(void *p, unsigned int flag)
{
    if (flag == 0xFFFF && p != 0) {
        D_240AF0.a = 0;
        D_240AF0.d = 1.0f;
        D_240AF0.c = 0;
        D_240AF0.b = 0;
    }
}
