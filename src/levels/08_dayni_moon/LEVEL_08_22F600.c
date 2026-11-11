typedef struct {
    char pad[0x58];
    float f58;
    float f5C;
    char pad2[0x04];
    float f64;
} S;

void func_22F548(void *a0);

void func_22F600(S *a0)
{
    char *p = (char *)a0;
    char *end = (char *)a0 + 0x58;

    do {
        func_22F548(p);
        p += 0x2C;
    } while (p < end);
    a0->f64 = (a0->f5C - a0->f58) * 4.6566129e-10f;
}
