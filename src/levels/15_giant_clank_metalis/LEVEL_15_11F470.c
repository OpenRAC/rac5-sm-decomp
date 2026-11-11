/* LEVEL_15:0x11F470 -- resets one record of the level's object table:
   a flag byte cleared, a scale set to 1.0, two counters cleared. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_2F2B60;

void func_11F470(void *p, unsigned int flag)
{
    if (flag == 0xFFFF && p != 0) {
        D_2F2B60.a = 0;
        D_2F2B60.d = 1.0f;
        D_2F2B60.c = 0;
        D_2F2B60.b = 0;
    }
}
