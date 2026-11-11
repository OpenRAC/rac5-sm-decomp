/* LEVEL_15:0x081400 -- raises a global byte flag, then writes two float
   arguments into a global record. */
typedef struct {
    float x;
    float y;
} V2;

extern V2 D_0014B390;
extern char D_0014B3A0;

void func_081400(float a, float b)
{
    D_0014B3A0 = 1;
    D_0014B390.x = a;
    D_0014B390.y = b;
}
