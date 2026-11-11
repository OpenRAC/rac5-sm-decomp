typedef struct {
    int i0;
    int i1;
    int i2;
    float f;
} Rec;

extern Rec D_003E5B38;
extern Rec *D_003E5B48;
extern char D_0026B8B0;
extern Rec *func_11FBE8(void *);

void func_1854C0(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        Rec **p = &D_003E5B48;

        D_003E5B38.f = 1.0f;
        D_003E5B38.i0 = 0;
        D_003E5B38.i2 = 0;
        D_003E5B38.i1 = 0;
        *p = func_11FBE8(&D_0026B8B0);
    }
}
