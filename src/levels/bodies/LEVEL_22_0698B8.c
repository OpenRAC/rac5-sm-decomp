typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0018B9F0;

void func_0698B8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0018B9F0.a = 0;
        D_0018B9F0.d = 1.0f;
        D_0018B9F0.c = 0;
        D_0018B9F0.b = 0;
    }
}
