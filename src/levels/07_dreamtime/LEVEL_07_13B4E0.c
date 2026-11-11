/* LEVEL_07:0x13B4E0 -- initialises a global record (three cleared words and
   1.0f), then stores the result of a shared routine in a neighbouring
   word. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003A7040;
extern int D_003A7050;
extern char D_0022FBD8[];

extern int func_112498(void *p);

void func_13B4E0(void *a0, int a1)
{
    int *dst;

    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            dst = &D_003A7050;
            D_003A7040.f_00 = 0;
            D_003A7040.f_04 = 0;
            D_003A7040.f_08 = 0;
            D_003A7040.f_0C = 1.0f;
            *dst = func_112498(D_0022FBD8);
        }
    }
}
