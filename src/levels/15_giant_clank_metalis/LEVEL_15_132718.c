/* LEVEL_15:0x132718 -- clears a counter and every fourth word of a 0x400-byte table. */
extern struct {
    char pad0[0x170];
    char *records;
    int pad1;
    int count;
} D_002F3D20;

void func_132718(void)
{
    char *record = D_002F3D20.records;
    char *end = record + 0x400;
    D_002F3D20.count = 0;
    while (record != end) {
        *(int *)(record + 4) = 0;
        record += 8;
    }
}
