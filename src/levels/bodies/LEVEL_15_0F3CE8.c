/* LEVEL_15:0x0F3CE8 -- resets one record of the level's object table:
   a flag byte cleared, a scale set to 1.0, two counters cleared. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_2A8A70;

void func_0F3CE8(void *p, unsigned int flag)
{
    if (flag == 0xFFFF && p != 0) {
        D_2A8A70.a = 0;
        D_2A8A70.d = 1.0f;
        D_2A8A70.c = 0;
        D_2A8A70.b = 0;
    }
}
