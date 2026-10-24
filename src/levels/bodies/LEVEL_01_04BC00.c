/* LEVEL_01.REL:0x04BC00 -- sets the render state of the level: the frame
   buffer, the viewport, the clear colour and the depth mode. */
typedef struct {
    char pad0[0x30];
    int f_30[0x74];
    char pad1[0x200 - 0x200];
} Obj;

void func_01A140(void *a0);
void func_01A180(void *a0);
void func_01A210(void *a0, float f);
void func_01A240(int a0);
void func_01A250(float f);
void func_01A260(int a0);

void func_04BC00(unsigned char *a0)
{
    func_01A140(a0 + 0x30);
    func_01A180(a0);
    func_01A210(a0 + 0x200, *(float *)(a0 + 0x270));
    func_01A240(1);
    func_01A250(0.5f);
    func_01A260(*(int *)(a0 + 0x59C));
}
