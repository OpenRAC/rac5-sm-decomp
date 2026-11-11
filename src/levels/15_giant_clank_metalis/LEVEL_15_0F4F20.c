/* LEVEL_15:0x0F4F20 -- resets one record of the level's object table:
   a flag byte cleared, a scale set to 1.0, two counters cleared. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_2A8AB0;

void func_0F4F20(void *p, unsigned int flag)
{
    if (flag == 0xFFFF && p != 0) {
        D_2A8AB0.a = 0;
        D_2A8AB0.d = 1.0f;
        D_2A8AB0.c = 0;
        D_2A8AB0.b = 0;
    }
}
