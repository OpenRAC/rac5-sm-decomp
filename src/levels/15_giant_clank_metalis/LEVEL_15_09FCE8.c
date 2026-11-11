/* LEVEL_15:0x09FCE8 -- resets one record of the level's object table:
   a flag byte cleared, a scale set to 1.0, two counters cleared. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_240480;

void func_09FCE8(void *p, unsigned int flag)
{
    if (flag == 0xFFFF && p != 0) {
        D_240480.a = 0;
        D_240480.d = 1.0f;
        D_240480.c = 0;
        D_240480.b = 0;
    }
}
