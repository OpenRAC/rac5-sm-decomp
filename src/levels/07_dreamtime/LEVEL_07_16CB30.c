/* LEVEL_07:0x16CB30 -- builds the screen's resources: two timed requests (ids 10 and 11, results kept), the three tagged hash words (mask 0xF800FFFF | shifted level value) with their resolved handles, three element initialisations, the effect request 0x1A and the two looked-up resources (the first sized 10000.0 in both axes when it exists). */
typedef struct {
    char pad00[0x1C];
    unsigned int f1C;
    char pad20[0x34 - 0x20];
    unsigned int f34;
    char pad38[0x94 - 0x38];
    unsigned int f94;
    char pad98[0x14C - 0x98];
    unsigned int f14C;
} Level;

extern Level D_002AD6C0;
extern int D_003AB058;
extern int D_003AB05C;
extern unsigned int D_0021BA2C;
extern unsigned int D_0021BA34;
extern int D_0021BA30;
extern unsigned int D_0021BAEC;
extern int D_0021BAE8;
extern char D_0021BAC8[];
extern char D_0021BB60[];
extern char D_0021BB80[];
extern int D_0021BB90;
extern int D_0021BB94;

struct Rec;

extern int func_1FE280(unsigned int p0, unsigned int p1, unsigned int p2, unsigned int p3, unsigned int p4, unsigned int p5);
extern int func_1EE5F8(void *first, void *second);
extern void func_1EE170(char *table);
extern void func_1EE5C8(struct Rec *a0);
extern void func_0F0548(int index);
extern int func_12D068(unsigned int value);

void func_16CB30(void)
{
    D_003AB058 = func_1FE280(10, D_002AD6C0.f34, 0, 0, 0, 3);
    D_003AB05C = func_1FE280(11, D_002AD6C0.f34, 0, 0, 1, 1);
    D_0021BA2C = (D_0021BA2C & 0xF800FFFFU) | (D_002AD6C0.f94 << 16);
    D_0021BA34 = (D_0021BA34 & 0xF800FFFFU) | (D_002AD6C0.f14C << 16);
    D_0021BA30 = func_1EE5F8((void *)D_0021BA34, 0);
    D_0021BAEC = (D_0021BAEC & 0xF800FFFFU) | (D_002AD6C0.f1C << 16);
    D_0021BAE8 = func_1EE5F8((void *)D_0021BAEC, 0);
    func_1EE170(D_0021BAC8);
    func_1EE170(D_0021BB60);
    func_1EE5C8((struct Rec *)D_0021BB80);
    func_0F0548(0x1A);
    D_0021BB90 = func_12D068(0x9A010B06U);
    if (D_0021BB90 != 0) {
        *(float *)(D_0021BB90 + 0x18) = 10000.0f;
        *(float *)(D_0021BB90 + 0x1C) = 10000.0f;
    }
    D_0021BB94 = func_12D068(0x887EBB51U);
}
