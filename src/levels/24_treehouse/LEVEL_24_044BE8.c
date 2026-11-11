/* LEVEL_24:0x044BE8 -- a chain of the shared calls on the record. */
typedef struct {
    char pad_00[0x200];
    char pad_01[0x70];
    float f_270;
    char pad_02[0x59C - 0x274];
    void *p_59C;
} Obj;

extern void func_018888(void *a0);
extern void func_0188C8(void *a0);
extern void func_018958(float a0, void *a1);
extern void func_018988(int a0);
extern void func_018998(float a0);
extern void func_0189A8(void *a0);

void func_044BE8(Obj *a0)
{
    func_018888((char *)a0 + 0x30);
    func_0188C8(a0);
    func_018958(a0->f_270, (char *)a0 + 0x200);
    func_018988(1);
    func_018998(0.5f);
    func_0189A8(a0->p_59C);
}
