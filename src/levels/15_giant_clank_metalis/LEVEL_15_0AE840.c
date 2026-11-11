typedef struct {
    int a;
    int d;
    int e;
    float b;
} Rec;

extern Rec D_243940;
extern float D_243950;
extern float D_157914;

void func_0AE840(void *p, unsigned int flag)
{
    if (flag == 0xFFFF && p != 0) {
        D_243940.b = 1.0f;
        D_243940.a = 0;
        D_243950 = D_157914;
        D_243940.e = 0;
        D_243940.d = 0;
    }
}
