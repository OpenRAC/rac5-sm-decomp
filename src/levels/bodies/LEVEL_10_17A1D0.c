/* LEVEL_10:0x17A1D0 -- placement copy of LEVEL_03_177C18.c: tags the object, then applies the argument's value
   to the object's sub record at 0x1C with a full mask. */
typedef struct {
    int pad0;
    int value;
} Arg;

extern char D_0022AA78[];
extern void func_0A0BF8(void *obj, int tag);
extern void func_032810(void *p, int value, int mask);

void func_17A1D0(char *obj, Arg *arg)
{
    func_0A0BF8(obj, (int)D_0022AA78);
    func_032810(obj + 0x1C, arg->value, 0xFFFF);
}
