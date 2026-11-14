/* LEVEL_23:0x09CB18 -- placement copy of LEVEL_01_0A5DD8.c: returns a word of the indexed 0x18-byte table record. */
typedef struct {
    int w0;
    int w4;
    int w8;
    char pad[0xC];
} Rec;

extern Rec D_00284898[];

int func_09CB18(int index)
{
    return D_00284898[index].w8;
}
