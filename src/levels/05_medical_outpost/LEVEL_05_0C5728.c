typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003178E8;
extern char D_003178F8[];
extern char D_00317930[];

void func_1311C0(void *x);
void func_0C5280(void *x);
void func_0C5678(void *x, int y);
void func_0C5258(void *x, int y);

void func_0C5728(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p != 0) {
        D_003178E8.c = 0;
        D_003178E8.d = 1.0f;
        D_003178E8.a = 0;
        D_003178E8.b = 0;
        func_1311C0(D_003178F8);
        func_0C5280(D_00317930);

    } else {
        func_0C5678(D_00317930, 2);
        func_0C5258(D_003178F8, 2);
    }
}
