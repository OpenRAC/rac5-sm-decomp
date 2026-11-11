/* LEVEL_16:0x0859C8 -- resets one record of the level's object table:
   a flag byte cleared, a scale set to 1.0, two counters cleared. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_24E5B0;

void func_0859C8(void *p, unsigned int flag)
{
    if (flag == 0xFFFF && p != 0) {
        D_24E5B0.a = 0;
        D_24E5B0.d = 1.0f;
        D_24E5B0.c = 0;
        D_24E5B0.b = 0;
    }
}
