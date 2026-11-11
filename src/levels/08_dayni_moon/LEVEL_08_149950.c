typedef struct {
    int i0;
    int i1;
    int i2;
    float f;
} Rec;

extern Rec D_003E09C0;
extern Rec *D_003E09D0;
extern char D_00264CE0;
extern Rec *func_11FBE8(void *);

void func_149950(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        Rec **p = &D_003E09D0;

        D_003E09C0.f = 1.0f;
        D_003E09C0.i0 = 0;
        D_003E09C0.i2 = 0;
        D_003E09C0.i1 = 0;
        *p = func_11FBE8(&D_00264CE0);
    }
}
