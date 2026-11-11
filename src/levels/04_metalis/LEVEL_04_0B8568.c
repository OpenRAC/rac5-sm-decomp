/* LEVEL_04:0x0B8568 -- tells whether the first word of a 32-byte table record is nonzero. */
typedef struct {
    int w0;
    char pad_04[0x1C];
} Rec;

extern Rec D_00342218[];

int func_0B8568(int index)
{
    return D_00342218[index].w0 != 0;
}
