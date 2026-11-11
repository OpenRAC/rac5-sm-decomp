/* LEVEL_02:0x1C13A0 -- runs the shared effect step with the addresses of two of the object's vectors and returns 3. */
struct Obj1C1E38;

extern void func_1C1E38(struct Obj1C1E38 *o, int a, int b);

int func_1C13A0(struct Obj1C1E38 *o)
{
    func_1C1E38(o, (int)o + 0x30, (int)o + 0x10);
    return 3;
}
