/* LEVEL_07:0x184C08 -- placement copy of LEVEL_03_177C18.c: tags the object, then applies the argument's value
   to the object's sub record at 0x1C with a full mask. */
typedef struct {
    int pad0;
    int value;
} Arg;

extern char D_00237198[];
extern void func_0A1AF8(void *obj, int tag);
extern void func_0345E8(void *p, int value, int mask);

void func_184C08(char *obj, Arg *arg)
{
    func_0A1AF8(obj, (int)D_00237198);
    func_0345E8(obj + 0x1C, arg->value, 0xFFFF);
}
