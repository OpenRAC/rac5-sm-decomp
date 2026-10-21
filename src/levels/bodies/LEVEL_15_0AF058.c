/* LEVEL_15:0x0AF058 -- resets one record of the level's object table:
   a flag byte cleared, a scale set to 1.0, two counters cleared. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_244000;

void func_0AF058(void *p, unsigned int flag)
{
    if (flag == 0xFFFF && p != 0) {
        D_244000.a = 0;
        D_244000.d = 1.0f;
        D_244000.c = 0;
        D_244000.b = 0;
    }
}
