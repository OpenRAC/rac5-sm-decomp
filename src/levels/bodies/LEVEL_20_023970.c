typedef struct {
    char pad00[0x58];
    float f58;
    char pad5C[0x28];
    float f84;
} Rec;

void func_0DB2B8(float c, void *a, void *b);

void func_023970(Rec *a0)
{
    func_0DB2B8(a0->f58, (char *)a0 + 0xF0, (char *)a0 + 0x10);
    func_0DB2B8(-a0->f58, (char *)a0 + 0x134, (char *)a0 + 0x28);
    func_0DB2B8(a0->f84, (char *)a0 + 0x178, (char *)a0 + 0x1C);
}
