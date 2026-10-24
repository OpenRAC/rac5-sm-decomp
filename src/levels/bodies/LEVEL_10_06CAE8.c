/* LEVEL_10:0x06CAE8 -- forwards the four arguments and the frame float. */
typedef struct {
    char pad0[0x1F8];
    float f1F8;
} Rec;

extern void func_06CB18(int, int, int, int, float);

void func_06CAE8(Rec *a0, int a1, int a2, int a3)
{
    func_06CB18(a1, a2, a3, 0, a0->f1F8);
}
