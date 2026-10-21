/* LEVEL_16:0x136978 -- resets one record of the level's object table:
   a flag byte cleared, a scale set to 1.0, two counters cleared. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_2E2C10;

void func_136978(void *p, unsigned int flag)
{
    if (flag == 0xFFFF && p != 0) {
        D_2E2C10.a = 0;
        D_2E2C10.d = 1.0f;
        D_2E2C10.c = 0;
        D_2E2C10.b = 0;
    }
}
