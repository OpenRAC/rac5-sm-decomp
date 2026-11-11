typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_002815E8;
extern char D_002815F8[];
extern char D_00281630[];

void func_10CD18(void *x);
void func_0B5188(void *x);
void func_0B5580(void *x, int y);
void func_0B5160(void *x, int y);

void func_0B5630(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p != 0) {
        D_002815E8.c = 0;
        D_002815E8.d = 1.0f;
        D_002815E8.a = 0;
        D_002815E8.b = 0;
        func_10CD18(D_002815F8);
        func_0B5188(D_00281630);

    } else {
        func_0B5580(D_00281630, 2);
        func_0B5160(D_002815F8, 2);
    }
}
