/* LEVEL_04:0x1C0568 -- placement copy of LEVEL_01_1B3568.c: registers an embedded record of the object with the shared player's id, then reports success. */
typedef struct {
    char pad[0xF8];
    int wF8;
} Player;

extern Player *D_0020DAA4;
extern void func_0234B8(char *record, int kind, int id, int flag);

int func_1C0568(char *o)
{
    func_0234B8(o + 0x74, 9, D_0020DAA4->wF8, -1);
    return 1;
}
