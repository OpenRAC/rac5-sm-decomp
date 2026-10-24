typedef struct {
    char pad_00[0x58];
    float f_58;
    char pad_5C[0x28];
    float f_84;
} Obj;

extern void func_11EF70(void *a0, float a1, void *a2);

void func_028088(Obj *a0)
{
    func_11EF70((char *)a0 + 0xF0, a0->f_58, (char *)a0 + 0x10);
    func_11EF70((char *)a0 + 0x134, -a0->f_58, (char *)a0 + 0x28);
    func_11EF70((char *)a0 + 0x178, a0->f_84, (char *)a0 + 0x1C);
}
