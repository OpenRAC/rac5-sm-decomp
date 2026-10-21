typedef struct {
    char pad[0x45];
    unsigned char f45;
    char pad46[0x2];
    void *f48;
} Obj;

typedef struct {
    char pad[0x8];
    float f08;
} Sub;

void func_07C938(void *a0, int a1, float a2);

void func_17BEF0(Obj *a0)
{
    if (a0->f45 == 0 || a0->f45 == 3) {
        a0->f45 = 1;
        func_07C938(a0, 2, 0.0f);
        ((Sub *)a0->f48)->f08 = 2.0f;
    }
}
