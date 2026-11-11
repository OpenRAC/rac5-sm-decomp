/* LEVEL_22:0x0122D8 -- resets a global record when the marker argument is
   0xFFFF and the pointer argument is not null. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00181158;
extern float D_00181168;

void func_0122D8(unsigned int a0, unsigned int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00181158.d = 1.0f;
        D_00181168 = 1.0f / 30.0f;
        D_00181158.a = 0;
        D_00181158.c = 0;
        D_00181158.b = 0;
    }
}
