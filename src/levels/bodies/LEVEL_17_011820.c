/* LEVEL_17:0x011820 -- calls func_1011B8 on the global D_001CF5A0 with an
   angle (62.831852), a radius (20) and the float global D_001CF568. */
typedef struct {
    int f_00;
} Rec;

extern Rec D_001CF5A0;
extern float D_001CF568;

extern void func_1011B8(Rec *a0, float a1, float a2, float a3);

void func_011820(void)
{
    func_1011B8(&D_001CF5A0, 62.831852f, 20.0f, D_001CF568);
}
