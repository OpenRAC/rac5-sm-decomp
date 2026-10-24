typedef struct {
    float f00;
    float f04;
    float f08;
} V;

void func_102B88(float a, float b, float c, float d);

void func_102C98(void *a0, V *v, float s)
{
    func_102B88(v->f00, v->f04, v->f08, s);
}
