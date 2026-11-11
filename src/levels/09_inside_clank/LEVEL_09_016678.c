typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00216F58;

void func_016678(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00216F58.a = 0;
        D_00216F58.d = 1.0f;
        D_00216F58.c = 0;
        D_00216F58.b = 0;
    }
}
