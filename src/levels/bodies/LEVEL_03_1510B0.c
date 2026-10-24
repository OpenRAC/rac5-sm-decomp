/* LEVEL_03.REL:1510B0 -- clears the first halfword, initialises the
   sub-record at 0x48 through func_02E3C8 with the two data blocks, and
   stores 60.0 at 0x80. */
typedef struct {
    short h_00;
    char pad_02[0x7E];
    float f_80;
} Obj;

extern char D_003ACCAC[];
extern char D_003ACA08[];

extern void func_02E3C8(void *a0, int a1, int a2, int a3, int a4);

void func_1510B0(Obj *a0, int a1, int a2)
{
    a0->h_00 = 0;
    func_02E3C8((char *)a0 + 0x48, (int)D_003ACCAC, (int)D_003ACA08, a1, a2);
    a0->f_80 = 60.0f;
}
