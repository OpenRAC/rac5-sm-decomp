/* LEVEL_02:0x171C60 -- resets one record of the level's object table:
   a flag byte cleared, a scale set to 1.0, two counters cleared. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_3AB700;

void func_171C60(void *p, unsigned int flag)
{
    if (flag == 0xFFFF && p != 0) {
        D_3AB700.a = 0;
        D_3AB700.d = 1.0f;
        D_3AB700.c = 0;
        D_3AB700.b = 0;
    }
}
