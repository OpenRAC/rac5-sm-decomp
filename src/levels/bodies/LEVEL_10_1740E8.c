/* LEVEL_10:0x1740E8 -- starts the object's embedded effect and switches it to
   state 1. */
extern void func_003668(void *, int, int, float);
extern void func_173F40(void *, int);

void func_1740E8(char *obj)
{
    func_003668(obj + 0x20, 100, 3, 1.0f);
    func_173F40(obj, 1);
}
