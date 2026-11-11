/* LEVEL_15:0x0EFF20 -- resets one record of the level's object table:
   a flag byte cleared, a scale set to 1.0, two counters cleared. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_269010;

void func_0EFF20(void *p, unsigned int flag)
{
    if (flag == 0xFFFF && p != 0) {
        D_269010.a = 0;
        D_269010.d = 1.0f;
        D_269010.c = 0;
        D_269010.b = 0;
    }
}
