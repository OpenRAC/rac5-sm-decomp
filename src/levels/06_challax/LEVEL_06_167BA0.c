/* LEVEL_06:0x167BA0 -- placement copy of LEVEL_03_177C18.c: tags the object, then applies the argument's value
   to the object's sub record at 0x1C with a full mask. */
typedef struct {
    int pad0;
    int value;
} Arg;

extern char D_0020F490[];
extern void func_09A2F0(void *obj, int tag);
extern void func_030B08(void *p, int value, int mask);

void func_167BA0(char *obj, Arg *arg)
{
    func_09A2F0(obj, (int)D_0020F490);
    func_030B08(obj + 0x1C, arg->value, 0xFFFF);
}
