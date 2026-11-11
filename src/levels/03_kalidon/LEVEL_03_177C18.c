/* LEVEL_03:0x177C18 -- tags the object, then applies the argument's value
   to the object's sub record at 0x1C with a full mask. */
typedef struct {
    int pad0;
    int value;
} Arg;

extern char D_0023AF08[];
extern void func_09F8A0(void *obj, int tag);
extern void func_0322F8(void *p, int value, int mask);

void func_177C18(char *obj, Arg *arg)
{
    func_09F8A0(obj, (int)D_0023AF08);
    func_0322F8(obj + 0x1C, arg->value, 0xFFFF);
}
