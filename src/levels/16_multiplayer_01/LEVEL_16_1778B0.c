/* LEVEL_16:0x1778B0 -- sets up the global handles (keyed word, looked-up record) and, when the record exists, gives it its two float limits. */
typedef struct {
    char pad_00[0x18];
    float lo;
    float hi;
} Limits;

extern int D_0024E2D0;
extern int D_002E5AF8;
extern Limits *D_001BE304[1];
extern void func_0DAAA8(int a);
extern int func_0D2810(unsigned int key);
extern Limits *func_106E98(unsigned int key);

void func_1778B0(void)
{
    Limits *p;

    func_0DAAA8(0);
    D_002E5AF8 = func_0D2810(((unsigned int)D_0024E2D0 << 16) | 0xA00070D9u);
    p = func_106E98(0x794D5DD0u);
    D_001BE304[0] = p;
    if (p != 0) {
        p->lo = 30.0f;
        D_001BE304[0]->hi = 120.0f;
    }
}
