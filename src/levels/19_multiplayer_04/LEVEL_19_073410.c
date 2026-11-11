typedef struct {
    char pad[0x0C];
    float f0C;
} S;

void func_073440(void *a0, void *a1);

void func_073410(void *a0, S *a1)
{
    func_073440(a0, a1);
    a1->f0C = 1.0f;
}
