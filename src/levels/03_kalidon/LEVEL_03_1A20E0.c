/* LEVEL_03:0x1A20E0 -- plays one of two effect sequences depending on the object's kind byte. */

struct Obj1A20E0 {
    char pad00[0x30];
    char pos30[0x15];
    unsigned char kind45;
};

extern void func_01A0B0(float *v);
extern void func_003720(int a, int b, float x, float y);
extern void func_003750(int a, float x, float y, int b);
extern void func_003780(int a, int b, float x, float y);
extern void func_003A50(void *p, int z, float a, float b);
extern void func_003410(int a, int b, int c);
extern void func_03A098(int a);
extern float func_001400(void);

void func_1A20E0(struct Obj1A20E0 *o)
{
    float tmp[4];

    func_01A0B0(tmp);
    if (o->kind45 >= 5 && o->kind45 <= 0x23) {
        func_003720(10, 2, 10.0f, 1.0f);
        func_003750(10, 1.14f, 1.0f, 2);
        func_003A50(o->pos30, 0, 1.0f, -func_001400());
    } else if (o->kind45 >= 2 && o->kind45 <= 4) {
        if (o->kind45 > 2) {
            func_003750(10, -1.0f, 0.3f, 0);
        }
        func_003410(0, 0, 0);
        func_003780(10, 0, 1.57f, 1.0f);
        func_003720(10, 0, 15.0f, 0.5f);
        func_03A098(1);
    }
}
