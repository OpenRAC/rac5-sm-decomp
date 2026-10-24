/* LEVEL_10.REL:0x1CFC80 -- builds one facing frame from the three floats at
   +0x2C of the record, then hands it to the caller's node and returns the
   slot at +0x70 of that node. */
typedef struct {
    char pad[0x2C];
    float f_2C;
} Rec;

extern void func_126D38(void *a0, int a1, int a2, float f12, float f13,
                        float f14);
extern void func_032D28(void *a0, void *a1, void *a2);

void *func_1CFC80(void *a0, int a1, int a2, Rec *a3, int t0)
{
    char buf[0x30];
    float f = a3->f_2C;

    func_126D38(buf, 0, t0, f, f, f);
    func_032D28(a0, buf, buf + 0x24);
    return (char *)a0 + 0x70;
}
