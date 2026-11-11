/* LEVEL_04:0x187A60 -- when the state byte is 0 or 3, marks it as 1,
   calls func_07FFB8 and sets the sub-record float to 2.0f. */
typedef struct {
    char pad[0x08];
    float f_08;
} Sub;

typedef struct {
    char pad[0x45];
    unsigned char f_45;
    char pad2[2];
    Sub *f_48;
} Obj;

extern void func_07FFB8(Obj *a0, int a1, float a2);

void func_187A60(Obj *a0)
{
    if (a0->f_45 == 0 || a0->f_45 == 3) {
        a0->f_45 = 1;
        func_07FFB8(a0, 2, 0.0f);
        a0->f_48->f_08 = 2.0f;
    }
}
