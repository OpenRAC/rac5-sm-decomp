/* LEVEL_08:0x0BD1B0 -- placement copy of LEVEL_04_0B7AC8.c: calls a helper, then stores a masked byte and an argument into one 20-byte record. */
typedef struct {
    int f_00;
    char pad_04[0x0C];
    int f_10;
} Rec;

extern Rec D_00376C08[];
extern void func_0BD188(int a0);

void func_0BD1B0(int a0, int a1, unsigned int a2)
{
    unsigned int flag;

    flag = a2 & 0xFF;
    func_0BD188(a0);
    D_00376C08[a0].f_00 = flag;
    D_00376C08[a0].f_10 = a1;
}
