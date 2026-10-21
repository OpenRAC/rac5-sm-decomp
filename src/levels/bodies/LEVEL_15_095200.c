/* LEVEL_15:0x095200 -- resets one record of the level's object table:
   a flag byte cleared, a scale set to 1.0, two counters cleared. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_23FCD0;

void func_095200(void *p, unsigned int flag)
{
    if (flag == 0xFFFF && p != 0) {
        D_23FCD0.a = 0;
        D_23FCD0.d = 1.0f;
        D_23FCD0.c = 0;
        D_23FCD0.b = 0;
    }
}
