typedef struct {
    char pad00[0x58];
    float f58;
    char pad5C[0x28];
    float f84;
} Rec;

void func_102B68(float c, void *a, void *b);

void func_026E68(Rec *a0)
{
    func_102B68(a0->f58, (char *)a0 + 0xF0, (char *)a0 + 0x10);
    func_102B68(-a0->f58, (char *)a0 + 0x134, (char *)a0 + 0x28);
    func_102B68(a0->f84, (char *)a0 + 0x178, (char *)a0 + 0x1C);
}
