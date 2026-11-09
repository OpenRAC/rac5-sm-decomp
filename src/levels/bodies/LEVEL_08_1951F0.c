/* LEVEL_08:0x1951F0 -- placement copy of LEVEL_03_177C18.c: tags the object, then applies the argument's value
   to the object's sub record at 0x1C with a full mask. */
typedef struct {
    int pad0;
    int value;
} Arg;

extern char D_0026CF78[];
extern void func_0AA418(void *obj, int tag);
extern void func_038978(void *p, int value, int mask);

void func_1951F0(char *obj, Arg *arg)
{
    func_0AA418(obj, (int)D_0026CF78);
    func_038978(obj + 0x1C, arg->value, 0xFFFF);
}
