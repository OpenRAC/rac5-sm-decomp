struct S {
    int a;
    int b;
    int c;
    int d;
    float e;
};

extern float func_000450(int value);

float func_000530(struct S s)
{
    float sum = 0.0f;

    sum = sum + func_000450(s.d);
    sum = sum + func_000450(s.a);
    sum = sum + func_000450(s.c);
    sum = sum + func_000450(s.b);
    return sum + s.e;
}
