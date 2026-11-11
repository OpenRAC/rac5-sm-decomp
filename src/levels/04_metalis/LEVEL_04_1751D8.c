typedef struct {
    char pad[0x64];
    float f64;
    int w68;
} Obj;

void *func_175268(void *a0);
void func_174C48(void *a0);

void func_1751D8(void *a0)
{
    Obj *o = func_175268(a0);

    if (o != 0) {
        func_174C48(a0);
        o->w68 = 0;
        o->f64 = -1.0f;
    }
}
