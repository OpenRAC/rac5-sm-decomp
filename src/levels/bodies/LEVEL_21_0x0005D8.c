struct S {
    int a;
    int b;
    int c;
    int d;
    float e;
};

extern float func_0004F8(int value);

float func_0005D8(struct S s)
{
    float sum = 0.0f;

    sum = sum + func_0004F8(s.d);
    sum = sum + func_0004F8(s.a);
    sum = sum + func_0004F8(s.c);
    sum = sum + func_0004F8(s.b);
    return sum + s.e;
}
