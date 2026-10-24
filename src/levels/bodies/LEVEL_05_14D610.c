/* LEVEL_05.REL:14D610 -- clears the first halfword, initialises the
   sub-record at 0x48 through func_02D290 with the two data blocks, and
   stores 60.0 at 0x80. */
typedef struct {
    short h_00;
    char pad_02[0x7E];
    float f_80;
} Obj;

extern char D_0037DC9C[];
extern char D_0037D9F8[];

extern void func_02D290(void *a0, int a1, int a2, int a3, int a4);

void func_14D610(Obj *a0, int a1, int a2)
{
    a0->h_00 = 0;
    func_02D290((char *)a0 + 0x48, (int)D_0037DC9C, (int)D_0037D9F8, a1, a2);
    a0->f_80 = 60.0f;
}
