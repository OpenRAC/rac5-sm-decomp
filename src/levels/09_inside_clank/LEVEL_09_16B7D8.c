/* LEVEL_09:0x16B7D8 -- placement copy of LEVEL_03_177C18.c: tags the object, then applies the argument's value
   to the object's sub record at 0x1C with a full mask. */
typedef struct {
    int pad0;
    int value;
} Arg;

extern char D_0020A518[];
extern void func_09CDD0(void *obj, int tag);
extern void func_0308C0(void *p, int value, int mask);

void func_16B7D8(char *obj, Arg *arg)
{
    func_09CDD0(obj, (int)D_0020A518);
    func_0308C0(obj + 0x1C, arg->value, 0xFFFF);
}
