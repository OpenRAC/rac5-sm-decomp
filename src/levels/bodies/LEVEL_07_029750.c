/* LEVEL_07:0x029750 -- three calls with a float argument. */
typedef struct {
    char pad00[0x58];
    float f58;
    char pad5C[0x28];
    float f84;
} Rec;

void func_1264F0(float c, void *a, void *b);

void func_029750(Rec *a0)
{
    func_1264F0(a0->f58, (char *)a0 + 0xF0, (char *)a0 + 0x10);
    func_1264F0(-a0->f58, (char *)a0 + 0x134, (char *)a0 + 0x28);
    func_1264F0(a0->f84, (char *)a0 + 0x178, (char *)a0 + 0x1C);
}
