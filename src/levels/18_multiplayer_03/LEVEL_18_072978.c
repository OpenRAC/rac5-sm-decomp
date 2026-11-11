typedef struct {
    char pad[0xC];
    float f0C;
} S;

void func_0729A8(void *a0);

void func_072978(void *a0, S *b)
{
    func_0729A8(a0);
    b->f0C = 1.0f;
}
