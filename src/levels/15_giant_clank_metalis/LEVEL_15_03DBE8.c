/* LEVEL_15:0x03DBE8 -- the level's reset routine: five calls on the level
   record, then the level's "next object" pointer is released. */
extern void func_016488(void *a0);
extern void func_0164C8(void *a0);
extern void func_016558(void *a0, float a1);
extern void func_016588(int a0);
extern void func_016598(float a0);
extern void func_0165A8(int a0);

void func_03DBE8(void *a0)
{
    void *s0 = a0;

    func_016488(s0 + 0x30);
    func_0164C8(s0);
    func_016558(s0 + 0x200, *(float *)((char *)s0 + 0x270));
    func_016588(1);
    func_016598(0.5f);
    func_0165A8(*(int *)((char *)s0 + 0x59C));
}
