/* LEVEL_17:0x165B98 -- placement copy of LEVEL_02_1C13A0.c: runs the shared effect step with the addresses of two of the object's vectors and returns 3. */
struct Obj1C1E38;

extern void func_1663D0(struct Obj1C1E38 *o, int a, int b);

int func_165B98(struct Obj1C1E38 *o)
{
    func_1663D0(o, (int)o + 0x30, (int)o + 0x10);
    return 3;
}
