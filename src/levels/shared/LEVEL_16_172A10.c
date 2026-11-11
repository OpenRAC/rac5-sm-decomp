/* LEVEL_16:0x172A10 -- resets one record of the level's object table:
   a flag byte cleared, a scale set to 1.0, two counters cleared. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_2E5A58;

void func_172A10(void *p, unsigned int flag)
{
    if (flag == 0xFFFF && p != 0) {
        D_2E5A58.a = 0;
        D_2E5A58.d = 1.0f;
        D_2E5A58.c = 0;
        D_2E5A58.b = 0;
    }
}
