/* LEVEL_06.REL:048328 -- starts the level's sub objects in order: the tail
   of the record, the record itself, its sprite, the shared timer and the
   child the record holds at +0x59C. */
extern void func_0189F0(void *a0);
extern void func_018A30(void *a0);
extern void func_018AC0(void *a0, float f);
extern void func_018AF0(int a0);
extern void func_018B00(float f);
extern void func_018B10(void *a0);

void func_048328(char *a0)
{
    func_0189F0(a0 + 0x30);
    func_018A30(a0);
    func_018AC0(a0 + 0x200, *(float *)(a0 + 0x270));
    func_018AF0(1);
    func_018B00(0.5f);
    func_018B10(*(void **)(a0 + 0x59C));
}
