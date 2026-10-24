/* LEVEL_22:0x022458 -- re-arms the timer and feeds the scaled fade value. */
typedef struct {
    int pad0[7];
    int f_1C;
    int pad1[10];
    int f_48;
} Obj;

extern Obj *D_15332C;
extern int D_153334;
extern void func_000000(float v);

void func_022458(float scale)
{
    Obj *p = D_15332C;

    if (p->f_48 < 0)
        p->f_48 = p->f_1C;
    func_000000((float)D_15332C->f_1C / 255.0f * scale);
    D_153334 = 5;
}
