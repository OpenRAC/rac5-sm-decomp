typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00346228;
extern char D_00346238[];
extern char D_00346270[];

void func_141CC8(void *x);
void func_0CC4F0(void *x);
void func_0CC8E8(void *x, int y);
void func_0CC4C8(void *x, int y);

void func_0CC998(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p != 0) {
        D_00346228.c = 0;
        D_00346228.d = 1.0f;
        D_00346228.a = 0;
        D_00346228.b = 0;
        func_141CC8(D_00346238);
        func_0CC4F0(D_00346270);

    } else {
        func_0CC8E8(D_00346270, 2);
        func_0CC4C8(D_00346238, 2);
    }
}
