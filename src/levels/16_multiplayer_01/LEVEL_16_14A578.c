typedef struct {
    int i0;
    int i1;
    int i2;
    float f;
} Rec;

extern Rec D_002E5108;
extern Rec *D_002E5118;
extern char D_001D39F8;
extern Rec *func_0F0060(void *);

void func_14A578(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        Rec **p = &D_002E5118;

        D_002E5108.f = 1.0f;
        D_002E5108.i0 = 0;
        D_002E5108.i2 = 0;
        D_002E5108.i1 = 0;
        *p = func_0F0060(&D_001D39F8);
    }
}
