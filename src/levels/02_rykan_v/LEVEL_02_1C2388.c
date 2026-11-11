/* LEVEL_02:0x1C2388 -- hashes two fields of a global record with a tag and stores the results in two globals. */
typedef struct {
    char pad0[0xA8];
    int a;
    char pad1[0xB4 - 0xAC];
    int b;
} Rec;

extern int func_10FF68(unsigned int value);
extern int D_0021DC50;
extern int D_0021DC4C;
extern Rec D_002AF2C0;

void func_1C2388(void)
{
    D_0021DC50 = func_10FF68((D_002AF2C0.a << 16) | 0xA00010C1U);
    D_0021DC4C = func_10FF68((D_002AF2C0.b << 16) | 0xA00010C1U);
}
