typedef struct {
    int f00;
    char pad[0x54];
    float f58;
} S;

extern void func_163B68(void *a0, int a1);

void func_163588(char *a0)
{
    S *v0 = *(S **)(a0 + 0x58);
    int x = v0->f00;
    float f = v0->f58 - 1.0f;

    v0->f58 = f;
    if (f <= 0.0f)
        func_163B68(a0, x);
}
