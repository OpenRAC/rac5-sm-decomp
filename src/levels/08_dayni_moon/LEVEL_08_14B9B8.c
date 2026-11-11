/* LEVEL_08.REL:14B9B8 -- picks one of two floats from the record at 0x58
   depending on its flag, then passes the caller's arguments and the
   sub-record at 0x30 to func_01CFA0 with the type codes. */
typedef struct {
    char pad_00[0x6C];
    int f_6C;
    char pad_70[0x68];
    float f_D8;
    float f_DC;
} Rec;

typedef struct {
    char pad_00[0x58];
    Rec *f_58;
} Obj;

extern void func_01CFA0(int a0, int a1, void *a2, int a3, int a4, int a5,
                        int a6, float f12);

void func_14B9B8(Obj *a0, int a1, int a2)
{
    Rec *p = a0->f_58;
    float f = p->f_6C ? p->f_DC : p->f_D8;

    func_01CFA0(a1, a2, (char *)a0 + 0x30, 0x529, 0x101, 2, 1, f);
}
