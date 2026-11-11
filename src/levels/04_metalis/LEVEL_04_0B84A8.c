typedef struct {
    char pad[0x14];
    float f14;
    char pad2[8];
} E;

extern E D_00342218[];

void func_0B84A8(int a0, float v)
{
    D_00342218[a0].f14 = v;
}
