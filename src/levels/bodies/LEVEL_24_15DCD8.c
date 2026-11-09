/* LEVEL_24:0x15DCD8 -- placement copy of LEVEL_03_177C18.c: tags the object, then applies the argument's value
   to the object's sub record at 0x1C with a full mask. */
typedef struct {
    int pad0;
    int value;
} Arg;

extern char D_001F01A0[];
extern void func_099398(void *obj, int tag);
extern void func_02D458(void *p, int value, int mask);

void func_15DCD8(char *obj, Arg *arg)
{
    func_099398(obj, (int)D_001F01A0);
    func_02D458(obj + 0x1C, arg->value, 0xFFFF);
}
