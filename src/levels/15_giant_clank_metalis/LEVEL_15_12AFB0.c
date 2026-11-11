/* LEVEL_15:0x12AFB0 -- resets one record of the level's object table:
   a flag byte cleared, a scale set to 1.0, two counters cleared. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_2F2FC0;

void func_12AFB0(void *p, unsigned int flag)
{
    if (flag == 0xFFFF && p != 0) {
        D_2F2FC0.a = 0;
        D_2F2FC0.d = 1.0f;
        D_2F2FC0.c = 0;
        D_2F2FC0.b = 0;
    }
}
