/* LEVEL_18:0x045F70 -- the level's reset routine: five calls on the level
   record, then the level's "next object" pointer is released. */
extern void func_017C20(void *a0);
extern void func_017C60(void *a0);
extern void func_017CF0(void *a0, float a1);
extern void func_017D20(int a0);
extern void func_017D30(float a0);
extern void func_017D40(int a0);

void func_045F70(void *a0)
{
    void *s0 = a0;

    func_017C20(s0 + 0x30);
    func_017C60(s0);
    func_017CF0(s0 + 0x200, *(float *)((char *)s0 + 0x270));
    func_017D20(1);
    func_017D30(0.5f);
    func_017D40(*(int *)((char *)s0 + 0x59C));
}
