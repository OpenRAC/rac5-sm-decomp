/* LEVEL_20.REL:0x041850 -- pushes the node through the six setup stages. */
typedef struct {
    char pad[0x270];
    float f_270;
    char pad2[0x59C - 0x274];
    int f_59C;
} Obj;

extern void func_0163B8(void *a0);
extern void func_0163F8(void *a0);
extern void func_016488(void *a0, float f12);
extern void func_0164B8(int a0);
extern void func_0164C8(float f12);
extern void func_0164D8(int a0);

void func_041850(Obj *a0)
{
    func_0163B8((char *)a0 + 0x30);
    func_0163F8(a0);
    func_016488((char *)a0 + 0x200, a0->f_270);
    func_0164B8(1);
    func_0164C8(0.5f);
    func_0164D8(a0->f_59C);
}
