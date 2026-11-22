/* LEVEL_15:0x11DBB0 -- precomputes reciprocal scales for a record, accumulates the per-part factors and refreshes the packed table indices. */
typedef struct {
    unsigned int index_00;
    unsigned int packed_04;
    char pad_08[8];
    float f_10;
    float f_14;
    char pad_18[8];
} Part;

typedef struct {
    float x_00;
    float y_04;
    float z_08;
    char pad_0C[0x10];
    Part *parts_1C;
    int count_20;
    char pad_24[0x10];
    float prod_34;
    float prod_38;
    char pad_3C[0x2C];
    unsigned int flags_68;
    unsigned int word_6C;
    unsigned int idx_70;
    unsigned int word_74;
    unsigned int idx_78;
    char pad_7C[0x98];
    float inv_x_114;
    float inv_y_118;
    float inv_z_11C;
} Fx;

extern unsigned int D_001AFE00[];
extern void func_0D0278(int *a0, int a1);

void func_11DBB0(Fx *fx)
{
    int i;
    int n;
    unsigned int m;
    Part *p;

    fx->inv_x_114 = 1.0f / fx->x_00;
    fx->inv_y_118 = 1.0f / fx->y_04;
    fx->inv_z_11C = 1.0f / fx->z_08;
    fx->prod_34 = 1.0f;
    fx->prod_38 = 1.0f;
    n = fx->count_20;
    for (i = 0; i < n; i++) {
        p = &fx->parts_1C[i];
        p->packed_04 = (p->packed_04 & 0xF800FFFF) | (D_001AFE00[p->index_00] << 16);
        fx->prod_34 = fx->prod_34 * p->f_10;
        fx->prod_38 = fx->prod_38 * p->f_14;
    }
    m = fx->word_6C;
    m = (m & 0xF800FFFF) | (D_001AFE00[fx->idx_70] << 16);
    m = (m & 0xFFFFFFC3) | 0x20;
    m = (m & 0xFFFFFFFC) | 1;
    fx->word_6C = m;
    fx->word_74 = (fx->word_74 & 0xF800FFFF) | (D_001AFE00[fx->idx_78] << 16);
    func_0D0278((int *)((char *)fx + 0x7C), 2);
}
