/* LEVEL_15:0x0258B0 -- resets one record of the level's object table:
   a flag byte cleared, a scale set to 1.0, two counters cleared. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_179AB8;

void func_0258B0(void *p, unsigned int flag)
{
    if (flag == 0xFFFF && p != 0) {
        D_179AB8.a = 0;
        D_179AB8.d = 1.0f;
        D_179AB8.c = 0;
        D_179AB8.b = 0;
    }
}
