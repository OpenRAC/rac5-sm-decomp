/* LEVEL_08:0x0BDC50 -- placement copy of LEVEL_04_0B8568.c: tells whether the first word of a 32-byte table record is nonzero. */
typedef struct {
    int w0;
    char pad_04[0x1C];
} Rec;

extern Rec D_00376C98[];

int func_0BDC50(int index)
{
    return D_00376C98[index].w0 != 0;
}
