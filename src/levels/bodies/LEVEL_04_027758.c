/* LEVEL_04.REL:0x027758 -- restarts the exhausted counter of the global record
   and sends the scaled level to func_000000, then flags the frame done. */
typedef struct {
    char pad0[0x1C];
    int f_1C;
    char pad1[0x48 - 0x20];
    int f_48;
} Obj;

extern Obj *D_0020D12C;
extern int D_0020D134;

void func_000000(float x);

void func_027758(float f)
{
    if (D_0020D12C->f_48 < 0)
        D_0020D12C->f_48 = D_0020D12C->f_1C;
    func_000000((float)D_0020D12C->f_1C / 255.0f * f);
    D_0020D134 = 5;
}
