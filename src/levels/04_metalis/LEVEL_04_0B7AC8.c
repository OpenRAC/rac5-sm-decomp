/* LEVEL_04:0x0B7AC8 -- calls a helper, then stores a masked byte and an argument into one 20-byte record. */
typedef struct {
    int f_00;
    char pad_04[0x0C];
    int f_10;
} Rec;

extern Rec D_00342188[];
extern void func_0B7AA0(int a0);

void func_0B7AC8(int a0, int a1, unsigned int a2)
{
    unsigned int flag;

    flag = a2 & 0xFF;
    func_0B7AA0(a0);
    D_00342188[a0].f_00 = flag;
    D_00342188[a0].f_10 = a1;
}
