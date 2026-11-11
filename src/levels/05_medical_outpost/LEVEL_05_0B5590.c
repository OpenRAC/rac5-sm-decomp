/* LEVEL_05.REL:0x0B5590 -- starts the countdown of one timer, in frames of
   a thirtieth of a second. */
typedef struct {
    char pad0[0x8];
    int f_08;
    int f_0C;
    int f_10;
    int f_14;
    int f_18;
    int f_1C;
    int f_20;
    char pad1[0x38 - 0x24];
} Timer;

extern Timer D_001EBC38[];

void func_0B5590(int a0, int a1)
{
    if (D_001EBC38[a0].f_10) return;
    D_001EBC38[a0].f_08 = 2;
    D_001EBC38[a0].f_20 = (int)((float)a1 * 0.016667f * 30.0f);
}
