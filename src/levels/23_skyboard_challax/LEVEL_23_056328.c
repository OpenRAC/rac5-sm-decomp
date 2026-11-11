/* LEVEL_23:0x056328 -- placement copy of LEVEL_22_0527F8.c: resets a block of state and resolves six hashed resources, tuning three of them. */
typedef struct {
    char pad0[0x14];
    float f14;
    float f18;
    float f1C;
    char pad20[8];
    float f28;
} Res;
typedef struct {
    char pad0[0x130];
    float f130;
    char pad134[0x164 - 0x134];
    int i164;
    int i168;
    int i16C;
    int i170;
    char pad174[0x17C - 0x174];
    Res *r17C;
    Res *r180;
    Res *r184;
    Res *r188;
    Res *r18C;
    Res *r190;
    Res *r194;
    char pad198[0x1A8 - 0x198];
    int i1A8;
    char pad1AC[0x1B4 - 0x1AC];
    char c1B4;
} Blk;
extern Blk D_002063F8;
extern Res *func_11AEE0(unsigned hash);

void func_056328(void)
{
    D_002063F8.f130 = 150.0f;
    D_002063F8.i164 = 0;
    D_002063F8.i16C = 0;
    D_002063F8.i170 = 0;
    D_002063F8.i168 = 0;
    D_002063F8.c1B4 = 0;
    D_002063F8.i1A8 = 0;
    D_002063F8.r180 = func_11AEE0(0x5ED91096);
    D_002063F8.r184 = func_11AEE0(0xE8900CF2);
    D_002063F8.r188 = func_11AEE0(0x8AB0DADE);
    D_002063F8.r17C = func_11AEE0(0x3F95B3F2);
    D_002063F8.r18C = func_11AEE0(0xF19932D9);
    if (D_002063F8.r18C) {
        D_002063F8.r18C->f14 = 0.7f;
        D_002063F8.r18C->f28 = 0.5f;
    }
    D_002063F8.r190 = func_11AEE0(0x327E39BB);
    if (D_002063F8.r190) {
        D_002063F8.r190->f14 = 0.7f;
        D_002063F8.r190->f28 = 0.5f;
    }
    D_002063F8.r194 = func_11AEE0(0x2971520F);
    if (D_002063F8.r194) {
        D_002063F8.r194->f1C = 50.0f;
        D_002063F8.r194->f18 = 50.0f;
    }
}
